/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ES_V20180416_ESCLIENT_H_
#define TENCENTCLOUD_ES_V20180416_ESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesResponse.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseResponse.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            class EsClient : public AbstractClient
            {
            public:
                EsClient(const Credential &credential, const std::string &region);
                EsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::RestartInstanceResponse> RestartInstanceOutcome;
                typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartInstanceRequest&, RestartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpdateInstanceResponse> UpdateInstanceOutcome;
                typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateInstanceRequest&, UpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeLicenseResponse> UpgradeLicenseOutcome;
                typedef std::future<UpgradeLicenseOutcome> UpgradeLicenseOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeLicenseRequest&, UpgradeLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLicenseAsyncHandler;



                /**
                 *创建指定规格的ES集群实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *销毁集群实例 
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *查询用户该地域下符合条件的ES集群的日志
                 * @param req DescribeInstanceLogsRequest
                 * @return DescribeInstanceLogsOutcome
                 */
                DescribeInstanceLogsOutcome DescribeInstanceLogs(const Model::DescribeInstanceLogsRequest &request);
                void DescribeInstanceLogsAsync(const Model::DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogsOutcomeCallable DescribeInstanceLogsCallable(const Model::DescribeInstanceLogsRequest& request);

                /**
                 *查询实例指定条件下的操作记录
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *查询用户该地域下符合条件的所有实例
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *重启ES集群实例(用于系统版本更新等操作) 
                 * @param req RestartInstanceRequest
                 * @return RestartInstanceOutcome
                 */
                RestartInstanceOutcome RestartInstance(const Model::RestartInstanceRequest &request);
                void RestartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInstanceOutcomeCallable RestartInstanceCallable(const Model::RestartInstanceRequest& request);

                /**
                 *对集群进行扩缩容，修改实例名称，修改配置，重置密码， 添加Kibana黑白名单等操作。参数中InstanceId为必传参数，ForceRestart为选填参数，剩余参数传递组合及含义如下：
- InstanceName：修改实例名称(仅用于标识实例)
- NodeNum：集群数据节点横向扩缩容
- NodeType, DiskSize：集群数据节点纵向扩缩容
- MasterNodeNum: 集群专用主节点横向扩缩容
- MasterNodeType, MasterNodeDiskSize: 集群专用主节点纵向扩缩容
- EsConfig：修改集群配置
- Password：修改默认用户elastic的密码
- EsAcl：修改访问控制列表
- CosBackUp: 设置集群COS自动备份信息
以上参数组合只能传递一种，多传或少传均会导致请求失败
                 * @param req UpdateInstanceRequest
                 * @return UpdateInstanceOutcome
                 */
                UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest &request);
                void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request);

                /**
                 *升级ES集群版本
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

                /**
                 *升级ES商业特性
                 * @param req UpgradeLicenseRequest
                 * @return UpgradeLicenseOutcome
                 */
                UpgradeLicenseOutcome UpgradeLicense(const Model::UpgradeLicenseRequest &request);
                void UpgradeLicenseAsync(const Model::UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLicenseOutcomeCallable UpgradeLicenseCallable(const Model::UpgradeLicenseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_ESCLIENT_H_

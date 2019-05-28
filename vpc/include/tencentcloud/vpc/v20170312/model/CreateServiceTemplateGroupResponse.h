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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplateGroup.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateServiceTemplateGroup返回参数结构体
                */
                class CreateServiceTemplateGroupResponse : public AbstractModel
                {
                public:
                    CreateServiceTemplateGroupResponse();
                    ~CreateServiceTemplateGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取协议端口模板集合对象。
                     * @return ServiceTemplateGroup 协议端口模板集合对象。
                     */
                    ServiceTemplateGroup GetServiceTemplateGroup() const;

                    /**
                     * 判断参数 ServiceTemplateGroup 是否已赋值
                     * @return ServiceTemplateGroup 是否已赋值
                     */
                    bool ServiceTemplateGroupHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板集合对象。
                     */
                    ServiceTemplateGroup m_serviceTemplateGroup;
                    bool m_serviceTemplateGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESERVICETEMPLATEGROUPRESPONSE_H_
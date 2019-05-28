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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ScalingPolicy.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeScalingPolicies返回参数结构体
                */
                class DescribeScalingPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeScalingPoliciesResponse();
                    ~DescribeScalingPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取弹性伸缩告警触发策略详细信息列表。
                     * @return ScalingPolicySet 弹性伸缩告警触发策略详细信息列表。
                     */
                    std::vector<ScalingPolicy> GetScalingPolicySet() const;

                    /**
                     * 判断参数 ScalingPolicySet 是否已赋值
                     * @return ScalingPolicySet 是否已赋值
                     */
                    bool ScalingPolicySetHasBeenSet() const;

                    /**
                     * 获取符合条件的通知数量。
                     * @return TotalCount 符合条件的通知数量。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 弹性伸缩告警触发策略详细信息列表。
                     */
                    std::vector<ScalingPolicy> m_scalingPolicySet;
                    bool m_scalingPolicySetHasBeenSet;

                    /**
                     * 符合条件的通知数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
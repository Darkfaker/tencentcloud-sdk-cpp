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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ExecuteScalingPolicy请求参数结构体
                */
                class ExecuteScalingPolicyRequest : public AbstractModel
                {
                public:
                    ExecuteScalingPolicyRequest();
                    ~ExecuteScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警伸缩策略ID
                     * @return AutoScalingPolicyId 告警伸缩策略ID
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置告警伸缩策略ID
                     * @param AutoScalingPolicyId 告警伸缩策略ID
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                    /**
                     * 获取是否检查伸缩组活动处于冷却时间内，默认值为false
                     * @return HonorCooldown 是否检查伸缩组活动处于冷却时间内，默认值为false
                     */
                    bool GetHonorCooldown() const;

                    /**
                     * 设置是否检查伸缩组活动处于冷却时间内，默认值为false
                     * @param HonorCooldown 是否检查伸缩组活动处于冷却时间内，默认值为false
                     */
                    void SetHonorCooldown(const bool& _honorCooldown);

                    /**
                     * 判断参数 HonorCooldown 是否已赋值
                     * @return HonorCooldown 是否已赋值
                     */
                    bool HonorCooldownHasBeenSet() const;

                private:

                    /**
                     * 告警伸缩策略ID
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                    /**
                     * 是否检查伸缩组活动处于冷却时间内，默认值为false
                     */
                    bool m_honorCooldown;
                    bool m_honorCooldownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_

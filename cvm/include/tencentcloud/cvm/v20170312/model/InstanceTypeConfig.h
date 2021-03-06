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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例机型配置信息
                */
                class InstanceTypeConfig : public AbstractModel
                {
                public:
                    InstanceTypeConfig();
                    ~InstanceTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param Zone 可用区。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param InstanceType 实例机型。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例机型系列。
                     * @return InstanceFamily 实例机型系列。
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置实例机型系列。
                     * @param InstanceFamily 实例机型系列。
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取GPU核数，单位：核。
                     * @return GPU GPU核数，单位：核。
                     */
                    int64_t GetGPU() const;

                    /**
                     * 设置GPU核数，单位：核。
                     * @param GPU GPU核数，单位：核。
                     */
                    void SetGPU(const int64_t& _gPU);

                    /**
                     * 判断参数 GPU 是否已赋值
                     * @return GPU 是否已赋值
                     */
                    bool GPUHasBeenSet() const;

                    /**
                     * 获取CPU核数，单位：核。
                     * @return CPU CPU核数，单位：核。
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CPU核数，单位：核。
                     * @param CPU CPU核数，单位：核。
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存容量，单位：`GB`。
                     * @return Memory 内存容量，单位：`GB`。
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存容量，单位：`GB`。
                     * @param Memory 内存容量，单位：`GB`。
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例机型系列。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * GPU核数，单位：核。
                     */
                    int64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * CPU核数，单位：核。
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存容量，单位：`GB`。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIG_H_

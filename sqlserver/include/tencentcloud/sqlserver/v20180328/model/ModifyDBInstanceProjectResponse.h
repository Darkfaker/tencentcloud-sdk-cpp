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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceProject返回参数结构体
                */
                class ModifyDBInstanceProjectResponse : public AbstractModel
                {
                public:
                    ModifyDBInstanceProjectResponse();
                    ~ModifyDBInstanceProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取修改成功的实例个数
                     * @return Count 修改成功的实例个数
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 修改成功的实例个数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTRESPONSE_H_
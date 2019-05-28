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

#include <tencentcloud/tbm/v20180129/model/DescribeUserPortraitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbm::V20180129::Model;
using namespace rapidjson;
using namespace std;

DescribeUserPortraitRequest::DescribeUserPortraitRequest() :
    m_brandIdHasBeenSet(false)
{
}

string DescribeUserPortraitRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_brandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BrandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_brandId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserPortraitRequest::GetBrandId() const
{
    return m_brandId;
}

void DescribeUserPortraitRequest::SetBrandId(const string& _brandId)
{
    m_brandId = _brandId;
    m_brandIdHasBeenSet = true;
}

bool DescribeUserPortraitRequest::BrandIdHasBeenSet() const
{
    return m_brandIdHasBeenSet;
}


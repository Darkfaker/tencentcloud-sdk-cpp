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

#include <tencentcloud/bmvpc/v20180625/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace rapidjson;
using namespace std;

DescribeNatGatewaysRequest::DescribeNatGatewaysRequest() :
    m_natIdHasBeenSet(false),
    m_natNameHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeNatGatewaysRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_natNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_natName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNatGatewaysRequest::GetNatId() const
{
    return m_natId;
}

void DescribeNatGatewaysRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string DescribeNatGatewaysRequest::GetNatName() const
{
    return m_natName;
}

void DescribeNatGatewaysRequest::SetNatName(const string& _natName)
{
    m_natName = _natName;
    m_natNameHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::NatNameHasBeenSet() const
{
    return m_natNameHasBeenSet;
}

string DescribeNatGatewaysRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeNatGatewaysRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeNatGatewaysRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeNatGatewaysRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t DescribeNatGatewaysRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNatGatewaysRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeNatGatewaysRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNatGatewaysRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNatGatewaysRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



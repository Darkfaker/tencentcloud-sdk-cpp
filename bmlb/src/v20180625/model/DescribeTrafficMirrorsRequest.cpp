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

#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace rapidjson;
using namespace std;

DescribeTrafficMirrorsRequest::DescribeTrafficMirrorsRequest() :
    m_trafficMirrorIdsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTrafficMirrorsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrafficMirrorIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_trafficMirrorIds.begin(); itr != m_trafficMirrorIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<string> DescribeTrafficMirrorsRequest::GetTrafficMirrorIds() const
{
    return m_trafficMirrorIds;
}

void DescribeTrafficMirrorsRequest::SetTrafficMirrorIds(const vector<string>& _trafficMirrorIds)
{
    m_trafficMirrorIds = _trafficMirrorIds;
    m_trafficMirrorIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::TrafficMirrorIdsHasBeenSet() const
{
    return m_trafficMirrorIdsHasBeenSet;
}

vector<string> DescribeTrafficMirrorsRequest::GetAliases() const
{
    return m_aliases;
}

void DescribeTrafficMirrorsRequest::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

vector<string> DescribeTrafficMirrorsRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeTrafficMirrorsRequest::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

int64_t DescribeTrafficMirrorsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTrafficMirrorsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTrafficMirrorsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTrafficMirrorsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTrafficMirrorsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



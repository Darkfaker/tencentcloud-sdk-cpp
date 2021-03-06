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

#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeFlowLogsRequest::DescribeFlowLogsRequest() :
    m_vpcIdHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_cloudLogStateHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeFlowLogsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_flowLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowLogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_flowLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CloudLogState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cloudLogState.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderDirection.c_str(), allocator).Move(), allocator);
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


string DescribeFlowLogsRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeFlowLogsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeFlowLogsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeFlowLogsRequest::GetFlowLogId() const
{
    return m_flowLogId;
}

void DescribeFlowLogsRequest::SetFlowLogId(const string& _flowLogId)
{
    m_flowLogId = _flowLogId;
    m_flowLogIdHasBeenSet = true;
}

bool DescribeFlowLogsRequest::FlowLogIdHasBeenSet() const
{
    return m_flowLogIdHasBeenSet;
}

string DescribeFlowLogsRequest::GetFlowLogName() const
{
    return m_flowLogName;
}

void DescribeFlowLogsRequest::SetFlowLogName(const string& _flowLogName)
{
    m_flowLogName = _flowLogName;
    m_flowLogNameHasBeenSet = true;
}

bool DescribeFlowLogsRequest::FlowLogNameHasBeenSet() const
{
    return m_flowLogNameHasBeenSet;
}

string DescribeFlowLogsRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeFlowLogsRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeFlowLogsRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeFlowLogsRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeFlowLogsRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeFlowLogsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeFlowLogsRequest::GetTrafficType() const
{
    return m_trafficType;
}

void DescribeFlowLogsRequest::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool DescribeFlowLogsRequest::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

string DescribeFlowLogsRequest::GetCloudLogId() const
{
    return m_cloudLogId;
}

void DescribeFlowLogsRequest::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool DescribeFlowLogsRequest::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string DescribeFlowLogsRequest::GetCloudLogState() const
{
    return m_cloudLogState;
}

void DescribeFlowLogsRequest::SetCloudLogState(const string& _cloudLogState)
{
    m_cloudLogState = _cloudLogState;
    m_cloudLogStateHasBeenSet = true;
}

bool DescribeFlowLogsRequest::CloudLogStateHasBeenSet() const
{
    return m_cloudLogStateHasBeenSet;
}

string DescribeFlowLogsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeFlowLogsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeFlowLogsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeFlowLogsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeFlowLogsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeFlowLogsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

uint64_t DescribeFlowLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFlowLogsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFlowLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeFlowLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFlowLogsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFlowLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



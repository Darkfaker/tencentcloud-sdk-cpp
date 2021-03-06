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

#include <tencentcloud/cdb/v20170320/model/RoGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

RoGroup::RoGroup() :
    m_roGroupModeHasBeenSet(false),
    m_roGroupIdHasBeenSet(false),
    m_roGroupNameHasBeenSet(false),
    m_roOfflineDelayHasBeenSet(false),
    m_roMaxDelayTimeHasBeenSet(false),
    m_minRoInGroupHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_roInstancesHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

CoreInternalOutcome RoGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RoGroupMode") && !value["RoGroupMode"].IsNull())
    {
        if (!value["RoGroupMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoGroup.RoGroupMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupMode = string(value["RoGroupMode"].GetString());
        m_roGroupModeHasBeenSet = true;
    }

    if (value.HasMember("RoGroupId") && !value["RoGroupId"].IsNull())
    {
        if (!value["RoGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoGroup.RoGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupId = string(value["RoGroupId"].GetString());
        m_roGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RoGroupName") && !value["RoGroupName"].IsNull())
    {
        if (!value["RoGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoGroup.RoGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupName = string(value["RoGroupName"].GetString());
        m_roGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RoOfflineDelay") && !value["RoOfflineDelay"].IsNull())
    {
        if (!value["RoOfflineDelay"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoGroup.RoOfflineDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roOfflineDelay = value["RoOfflineDelay"].GetInt64();
        m_roOfflineDelayHasBeenSet = true;
    }

    if (value.HasMember("RoMaxDelayTime") && !value["RoMaxDelayTime"].IsNull())
    {
        if (!value["RoMaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoGroup.RoMaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roMaxDelayTime = value["RoMaxDelayTime"].GetInt64();
        m_roMaxDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("MinRoInGroup") && !value["MinRoInGroup"].IsNull())
    {
        if (!value["MinRoInGroup"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoGroup.MinRoInGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRoInGroup = value["MinRoInGroup"].GetInt64();
        m_minRoInGroupHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoGroup.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoGroup.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("RoInstances") && !value["RoInstances"].IsNull())
    {
        if (!value["RoInstances"].IsArray())
            return CoreInternalOutcome(Error("response `RoGroup.RoInstances` is not array type"));

        const Value &tmpValue = value["RoInstances"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roInstances.push_back(item);
        }
        m_roInstancesHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoGroup.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoGroup.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_roGroupModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoGroupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roGroupMode.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_roOfflineDelayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roOfflineDelay, allocator);
    }

    if (m_roMaxDelayTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roMaxDelayTime, allocator);
    }

    if (m_minRoInGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinRoInGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRoInGroup, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_roInstancesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roInstances.begin(); itr != m_roInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

}


string RoGroup::GetRoGroupMode() const
{
    return m_roGroupMode;
}

void RoGroup::SetRoGroupMode(const string& _roGroupMode)
{
    m_roGroupMode = _roGroupMode;
    m_roGroupModeHasBeenSet = true;
}

bool RoGroup::RoGroupModeHasBeenSet() const
{
    return m_roGroupModeHasBeenSet;
}

string RoGroup::GetRoGroupId() const
{
    return m_roGroupId;
}

void RoGroup::SetRoGroupId(const string& _roGroupId)
{
    m_roGroupId = _roGroupId;
    m_roGroupIdHasBeenSet = true;
}

bool RoGroup::RoGroupIdHasBeenSet() const
{
    return m_roGroupIdHasBeenSet;
}

string RoGroup::GetRoGroupName() const
{
    return m_roGroupName;
}

void RoGroup::SetRoGroupName(const string& _roGroupName)
{
    m_roGroupName = _roGroupName;
    m_roGroupNameHasBeenSet = true;
}

bool RoGroup::RoGroupNameHasBeenSet() const
{
    return m_roGroupNameHasBeenSet;
}

int64_t RoGroup::GetRoOfflineDelay() const
{
    return m_roOfflineDelay;
}

void RoGroup::SetRoOfflineDelay(const int64_t& _roOfflineDelay)
{
    m_roOfflineDelay = _roOfflineDelay;
    m_roOfflineDelayHasBeenSet = true;
}

bool RoGroup::RoOfflineDelayHasBeenSet() const
{
    return m_roOfflineDelayHasBeenSet;
}

int64_t RoGroup::GetRoMaxDelayTime() const
{
    return m_roMaxDelayTime;
}

void RoGroup::SetRoMaxDelayTime(const int64_t& _roMaxDelayTime)
{
    m_roMaxDelayTime = _roMaxDelayTime;
    m_roMaxDelayTimeHasBeenSet = true;
}

bool RoGroup::RoMaxDelayTimeHasBeenSet() const
{
    return m_roMaxDelayTimeHasBeenSet;
}

int64_t RoGroup::GetMinRoInGroup() const
{
    return m_minRoInGroup;
}

void RoGroup::SetMinRoInGroup(const int64_t& _minRoInGroup)
{
    m_minRoInGroup = _minRoInGroup;
    m_minRoInGroupHasBeenSet = true;
}

bool RoGroup::MinRoInGroupHasBeenSet() const
{
    return m_minRoInGroupHasBeenSet;
}

string RoGroup::GetWeightMode() const
{
    return m_weightMode;
}

void RoGroup::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool RoGroup::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

int64_t RoGroup::GetWeight() const
{
    return m_weight;
}

void RoGroup::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RoGroup::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<RoInstanceInfo> RoGroup::GetRoInstances() const
{
    return m_roInstances;
}

void RoGroup::SetRoInstances(const vector<RoInstanceInfo>& _roInstances)
{
    m_roInstances = _roInstances;
    m_roInstancesHasBeenSet = true;
}

bool RoGroup::RoInstancesHasBeenSet() const
{
    return m_roInstancesHasBeenSet;
}

string RoGroup::GetVip() const
{
    return m_vip;
}

void RoGroup::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool RoGroup::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t RoGroup::GetVport() const
{
    return m_vport;
}

void RoGroup::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool RoGroup::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}


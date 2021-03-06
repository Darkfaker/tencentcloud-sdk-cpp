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

#include <tencentcloud/vpc/v20170312/model/VpnGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

VpnGateway::VpnGateway() :
    m_vpnGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_isAddressBlockedHasBeenSet(false),
    m_newPurchasePlanHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome VpnGateway::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayName") && !value["VpnGatewayName"].IsNull())
    {
        if (!value["VpnGatewayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.VpnGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayName = string(value["VpnGatewayName"].GetString());
        m_vpnGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAddressBlocked") && !value["IsAddressBlocked"].IsNull())
    {
        if (!value["IsAddressBlocked"].IsBool())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.IsAddressBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAddressBlocked = value["IsAddressBlocked"].GetBool();
        m_isAddressBlockedHasBeenSet = true;
    }

    if (value.HasMember("NewPurchasePlan") && !value["NewPurchasePlan"].IsNull())
    {
        if (!value["NewPurchasePlan"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.NewPurchasePlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newPurchasePlan = string(value["NewPurchasePlan"].GetString());
        m_newPurchasePlanHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpnGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpnGateway::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpnGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAddressBlockedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsAddressBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAddressBlocked, allocator);
    }

    if (m_newPurchasePlanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewPurchasePlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_newPurchasePlan.c_str(), allocator).Move(), allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string VpnGateway::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void VpnGateway::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool VpnGateway::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string VpnGateway::GetVpcId() const
{
    return m_vpcId;
}

void VpnGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpnGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpnGateway::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void VpnGateway::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool VpnGateway::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

string VpnGateway::GetType() const
{
    return m_type;
}

void VpnGateway::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VpnGateway::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VpnGateway::GetState() const
{
    return m_state;
}

void VpnGateway::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpnGateway::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string VpnGateway::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void VpnGateway::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool VpnGateway::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string VpnGateway::GetRenewFlag() const
{
    return m_renewFlag;
}

void VpnGateway::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool VpnGateway::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string VpnGateway::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void VpnGateway::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool VpnGateway::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t VpnGateway::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void VpnGateway::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool VpnGateway::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string VpnGateway::GetCreatedTime() const
{
    return m_createdTime;
}

void VpnGateway::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpnGateway::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string VpnGateway::GetExpiredTime() const
{
    return m_expiredTime;
}

void VpnGateway::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool VpnGateway::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

bool VpnGateway::GetIsAddressBlocked() const
{
    return m_isAddressBlocked;
}

void VpnGateway::SetIsAddressBlocked(const bool& _isAddressBlocked)
{
    m_isAddressBlocked = _isAddressBlocked;
    m_isAddressBlockedHasBeenSet = true;
}

bool VpnGateway::IsAddressBlockedHasBeenSet() const
{
    return m_isAddressBlockedHasBeenSet;
}

string VpnGateway::GetNewPurchasePlan() const
{
    return m_newPurchasePlan;
}

void VpnGateway::SetNewPurchasePlan(const string& _newPurchasePlan)
{
    m_newPurchasePlan = _newPurchasePlan;
    m_newPurchasePlanHasBeenSet = true;
}

bool VpnGateway::NewPurchasePlanHasBeenSet() const
{
    return m_newPurchasePlanHasBeenSet;
}

string VpnGateway::GetRestrictState() const
{
    return m_restrictState;
}

void VpnGateway::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool VpnGateway::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

string VpnGateway::GetZone() const
{
    return m_zone;
}

void VpnGateway::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpnGateway::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}


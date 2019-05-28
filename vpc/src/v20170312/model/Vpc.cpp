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

#include <tencentcloud/vpc/v20170312/model/Vpc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

Vpc::Vpc() :
    m_vpcNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_enableMulticastHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dnsServerSetHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_enableDhcpHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome Vpc::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Vpc.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("EnableMulticast") && !value["EnableMulticast"].IsNull())
    {
        if (!value["EnableMulticast"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Vpc.EnableMulticast` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMulticast = value["EnableMulticast"].GetBool();
        m_enableMulticastHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsServerSet") && !value["DnsServerSet"].IsNull())
    {
        if (!value["DnsServerSet"].IsArray())
            return CoreInternalOutcome(Error("response `Vpc.DnsServerSet` is not array type"));

        const Value &tmpValue = value["DnsServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dnsServerSet.push_back((*itr).GetString());
        }
        m_dnsServerSetHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("DhcpOptionsId") && !value["DhcpOptionsId"].IsNull())
    {
        if (!value["DhcpOptionsId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.DhcpOptionsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpOptionsId = string(value["DhcpOptionsId"].GetString());
        m_dhcpOptionsIdHasBeenSet = true;
    }

    if (value.HasMember("EnableDhcp") && !value["EnableDhcp"].IsNull())
    {
        if (!value["EnableDhcp"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Vpc.EnableDhcp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDhcp = value["EnableDhcp"].GetBool();
        m_enableDhcpHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vpc.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vpc::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpcNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_enableMulticastHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableMulticast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMulticast, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServerSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dnsServerSet.begin(); itr != m_dnsServerSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_dhcpOptionsIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DhcpOptionsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dhcpOptionsId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDhcpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableDhcp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDhcp, allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string Vpc::GetVpcName() const
{
    return m_vpcName;
}

void Vpc::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool Vpc::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string Vpc::GetVpcId() const
{
    return m_vpcId;
}

void Vpc::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Vpc::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Vpc::GetCidrBlock() const
{
    return m_cidrBlock;
}

void Vpc::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool Vpc::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

bool Vpc::GetIsDefault() const
{
    return m_isDefault;
}

void Vpc::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Vpc::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool Vpc::GetEnableMulticast() const
{
    return m_enableMulticast;
}

void Vpc::SetEnableMulticast(const bool& _enableMulticast)
{
    m_enableMulticast = _enableMulticast;
    m_enableMulticastHasBeenSet = true;
}

bool Vpc::EnableMulticastHasBeenSet() const
{
    return m_enableMulticastHasBeenSet;
}

string Vpc::GetCreatedTime() const
{
    return m_createdTime;
}

void Vpc::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Vpc::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<string> Vpc::GetDnsServerSet() const
{
    return m_dnsServerSet;
}

void Vpc::SetDnsServerSet(const vector<string>& _dnsServerSet)
{
    m_dnsServerSet = _dnsServerSet;
    m_dnsServerSetHasBeenSet = true;
}

bool Vpc::DnsServerSetHasBeenSet() const
{
    return m_dnsServerSetHasBeenSet;
}

string Vpc::GetDomainName() const
{
    return m_domainName;
}

void Vpc::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool Vpc::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string Vpc::GetDhcpOptionsId() const
{
    return m_dhcpOptionsId;
}

void Vpc::SetDhcpOptionsId(const string& _dhcpOptionsId)
{
    m_dhcpOptionsId = _dhcpOptionsId;
    m_dhcpOptionsIdHasBeenSet = true;
}

bool Vpc::DhcpOptionsIdHasBeenSet() const
{
    return m_dhcpOptionsIdHasBeenSet;
}

bool Vpc::GetEnableDhcp() const
{
    return m_enableDhcp;
}

void Vpc::SetEnableDhcp(const bool& _enableDhcp)
{
    m_enableDhcp = _enableDhcp;
    m_enableDhcpHasBeenSet = true;
}

bool Vpc::EnableDhcpHasBeenSet() const
{
    return m_enableDhcpHasBeenSet;
}

string Vpc::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void Vpc::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool Vpc::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

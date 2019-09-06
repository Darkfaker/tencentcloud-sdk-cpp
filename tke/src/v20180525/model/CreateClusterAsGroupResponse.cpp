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

#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

CreateClusterAsGroupResponse::CreateClusterAsGroupResponse() :
    m_launchConfigurationIdHasBeenSet(false),
    m_autoScalingGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateClusterAsGroupResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("LaunchConfigurationId") && !rsp["LaunchConfigurationId"].IsNull())
    {
        if (!rsp["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(rsp["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScalingGroupId") && !rsp["AutoScalingGroupId"].IsNull())
    {
        if (!rsp["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(rsp["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateClusterAsGroupResponse::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

bool CreateClusterAsGroupResponse::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string CreateClusterAsGroupResponse::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

bool CreateClusterAsGroupResponse::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}


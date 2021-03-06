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

#include <tencentcloud/cam/v20190116/model/ListGroupsForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

ListGroupsForUserRequest::ListGroupsForUserRequest() :
    m_uidHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

string ListGroupsForUserRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uid, allocator);
    }

    if (m_rpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
    }

    if (m_pageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListGroupsForUserRequest::GetUid() const
{
    return m_uid;
}

void ListGroupsForUserRequest::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool ListGroupsForUserRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

uint64_t ListGroupsForUserRequest::GetRp() const
{
    return m_rp;
}

void ListGroupsForUserRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListGroupsForUserRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

uint64_t ListGroupsForUserRequest::GetPage() const
{
    return m_page;
}

void ListGroupsForUserRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListGroupsForUserRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}



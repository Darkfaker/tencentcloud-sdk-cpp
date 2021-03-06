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

#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

CreateSnapshotByTimeOffsetTemplateRequest::CreateSnapshotByTimeOffsetTemplateRequest() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateSnapshotByTimeOffsetTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateSnapshotByTimeOffsetTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateSnapshotByTimeOffsetTemplateRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateSnapshotByTimeOffsetTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t CreateSnapshotByTimeOffsetTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateSnapshotByTimeOffsetTemplateRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateSnapshotByTimeOffsetTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateSnapshotByTimeOffsetTemplateRequest::GetName() const
{
    return m_name;
}

void CreateSnapshotByTimeOffsetTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSnapshotByTimeOffsetTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSnapshotByTimeOffsetTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateSnapshotByTimeOffsetTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateSnapshotByTimeOffsetTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CreateSnapshotByTimeOffsetTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateSnapshotByTimeOffsetTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateSnapshotByTimeOffsetTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}



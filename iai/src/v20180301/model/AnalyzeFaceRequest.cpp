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

#include <tencentcloud/iai/v20180301/model/AnalyzeFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

AnalyzeFaceRequest::AnalyzeFaceRequest() :
    m_modeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string AnalyzeFaceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t AnalyzeFaceRequest::GetMode() const
{
    return m_mode;
}

void AnalyzeFaceRequest::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AnalyzeFaceRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string AnalyzeFaceRequest::GetImage() const
{
    return m_image;
}

void AnalyzeFaceRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool AnalyzeFaceRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string AnalyzeFaceRequest::GetUrl() const
{
    return m_url;
}

void AnalyzeFaceRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AnalyzeFaceRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


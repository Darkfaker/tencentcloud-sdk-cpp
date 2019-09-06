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

#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

MediaProcessTaskInput::MediaProcessTaskInput() :
    m_transcodeTaskSetHasBeenSet(false),
    m_animatedGraphicTaskSetHasBeenSet(false),
    m_snapshotByTimeOffsetTaskSetHasBeenSet(false),
    m_sampleSnapshotTaskSetHasBeenSet(false),
    m_imageSpriteTaskSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaProcessTaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TranscodeTaskSet") && !value["TranscodeTaskSet"].IsNull())
    {
        if (!value["TranscodeTaskSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaProcessTaskInput.TranscodeTaskSet` is not array type"));

        const Value &tmpValue = value["TranscodeTaskSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranscodeTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transcodeTaskSet.push_back(item);
        }
        m_transcodeTaskSetHasBeenSet = true;
    }

    if (value.HasMember("AnimatedGraphicTaskSet") && !value["AnimatedGraphicTaskSet"].IsNull())
    {
        if (!value["AnimatedGraphicTaskSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaProcessTaskInput.AnimatedGraphicTaskSet` is not array type"));

        const Value &tmpValue = value["AnimatedGraphicTaskSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnimatedGraphicTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_animatedGraphicTaskSet.push_back(item);
        }
        m_animatedGraphicTaskSetHasBeenSet = true;
    }

    if (value.HasMember("SnapshotByTimeOffsetTaskSet") && !value["SnapshotByTimeOffsetTaskSet"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetTaskSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaProcessTaskInput.SnapshotByTimeOffsetTaskSet` is not array type"));

        const Value &tmpValue = value["SnapshotByTimeOffsetTaskSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SnapshotByTimeOffsetTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_snapshotByTimeOffsetTaskSet.push_back(item);
        }
        m_snapshotByTimeOffsetTaskSetHasBeenSet = true;
    }

    if (value.HasMember("SampleSnapshotTaskSet") && !value["SampleSnapshotTaskSet"].IsNull())
    {
        if (!value["SampleSnapshotTaskSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaProcessTaskInput.SampleSnapshotTaskSet` is not array type"));

        const Value &tmpValue = value["SampleSnapshotTaskSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SampleSnapshotTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sampleSnapshotTaskSet.push_back(item);
        }
        m_sampleSnapshotTaskSetHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteTaskSet") && !value["ImageSpriteTaskSet"].IsNull())
    {
        if (!value["ImageSpriteTaskSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaProcessTaskInput.ImageSpriteTaskSet` is not array type"));

        const Value &tmpValue = value["ImageSpriteTaskSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageSpriteTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageSpriteTaskSet.push_back(item);
        }
        m_imageSpriteTaskSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaProcessTaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_transcodeTaskSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranscodeTaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transcodeTaskSet.begin(); itr != m_transcodeTaskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_animatedGraphicTaskSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AnimatedGraphicTaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_animatedGraphicTaskSet.begin(); itr != m_animatedGraphicTaskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_snapshotByTimeOffsetTaskSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotByTimeOffsetTaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotByTimeOffsetTaskSet.begin(); itr != m_snapshotByTimeOffsetTaskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sampleSnapshotTaskSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleSnapshotTaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sampleSnapshotTaskSet.begin(); itr != m_sampleSnapshotTaskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageSpriteTaskSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSpriteTaskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageSpriteTaskSet.begin(); itr != m_imageSpriteTaskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TranscodeTaskInput> MediaProcessTaskInput::GetTranscodeTaskSet() const
{
    return m_transcodeTaskSet;
}

void MediaProcessTaskInput::SetTranscodeTaskSet(const vector<TranscodeTaskInput>& _transcodeTaskSet)
{
    m_transcodeTaskSet = _transcodeTaskSet;
    m_transcodeTaskSetHasBeenSet = true;
}

bool MediaProcessTaskInput::TranscodeTaskSetHasBeenSet() const
{
    return m_transcodeTaskSetHasBeenSet;
}

vector<AnimatedGraphicTaskInput> MediaProcessTaskInput::GetAnimatedGraphicTaskSet() const
{
    return m_animatedGraphicTaskSet;
}

void MediaProcessTaskInput::SetAnimatedGraphicTaskSet(const vector<AnimatedGraphicTaskInput>& _animatedGraphicTaskSet)
{
    m_animatedGraphicTaskSet = _animatedGraphicTaskSet;
    m_animatedGraphicTaskSetHasBeenSet = true;
}

bool MediaProcessTaskInput::AnimatedGraphicTaskSetHasBeenSet() const
{
    return m_animatedGraphicTaskSetHasBeenSet;
}

vector<SnapshotByTimeOffsetTaskInput> MediaProcessTaskInput::GetSnapshotByTimeOffsetTaskSet() const
{
    return m_snapshotByTimeOffsetTaskSet;
}

void MediaProcessTaskInput::SetSnapshotByTimeOffsetTaskSet(const vector<SnapshotByTimeOffsetTaskInput>& _snapshotByTimeOffsetTaskSet)
{
    m_snapshotByTimeOffsetTaskSet = _snapshotByTimeOffsetTaskSet;
    m_snapshotByTimeOffsetTaskSetHasBeenSet = true;
}

bool MediaProcessTaskInput::SnapshotByTimeOffsetTaskSetHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskSetHasBeenSet;
}

vector<SampleSnapshotTaskInput> MediaProcessTaskInput::GetSampleSnapshotTaskSet() const
{
    return m_sampleSnapshotTaskSet;
}

void MediaProcessTaskInput::SetSampleSnapshotTaskSet(const vector<SampleSnapshotTaskInput>& _sampleSnapshotTaskSet)
{
    m_sampleSnapshotTaskSet = _sampleSnapshotTaskSet;
    m_sampleSnapshotTaskSetHasBeenSet = true;
}

bool MediaProcessTaskInput::SampleSnapshotTaskSetHasBeenSet() const
{
    return m_sampleSnapshotTaskSetHasBeenSet;
}

vector<ImageSpriteTaskInput> MediaProcessTaskInput::GetImageSpriteTaskSet() const
{
    return m_imageSpriteTaskSet;
}

void MediaProcessTaskInput::SetImageSpriteTaskSet(const vector<ImageSpriteTaskInput>& _imageSpriteTaskSet)
{
    m_imageSpriteTaskSet = _imageSpriteTaskSet;
    m_imageSpriteTaskSetHasBeenSet = true;
}

bool MediaProcessTaskInput::ImageSpriteTaskSetHasBeenSet() const
{
    return m_imageSpriteTaskSetHasBeenSet;
}

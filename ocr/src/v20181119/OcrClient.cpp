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

#include <tencentcloud/ocr/v20181119/OcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ocr::V20181119;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-19";
    const string ENDPOINT = "ocr.tencentcloudapi.com";
}

OcrClient::OcrClient(const Credential &credential, const string &region) :
    OcrClient(credential, region, ClientProfile())
{
}

OcrClient::OcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OcrClient::ArithmeticOCROutcome OcrClient::ArithmeticOCR(const ArithmeticOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ArithmeticOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArithmeticOCRResponse rsp = ArithmeticOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArithmeticOCROutcome(rsp);
        else
            return ArithmeticOCROutcome(o.GetError());
    }
    else
    {
        return ArithmeticOCROutcome(outcome.GetError());
    }
}

void OcrClient::ArithmeticOCRAsync(const ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArithmeticOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ArithmeticOCROutcomeCallable OcrClient::ArithmeticOCRCallable(const ArithmeticOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArithmeticOCROutcome()>>(
        [this, request]()
        {
            return this->ArithmeticOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::EnglishOCROutcome OcrClient::EnglishOCR(const EnglishOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EnglishOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnglishOCRResponse rsp = EnglishOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnglishOCROutcome(rsp);
        else
            return EnglishOCROutcome(o.GetError());
    }
    else
    {
        return EnglishOCROutcome(outcome.GetError());
    }
}

void OcrClient::EnglishOCRAsync(const EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnglishOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EnglishOCROutcomeCallable OcrClient::EnglishOCRCallable(const EnglishOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnglishOCROutcome()>>(
        [this, request]()
        {
            return this->EnglishOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralAccurateOCROutcome OcrClient::GeneralAccurateOCR(const GeneralAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralAccurateOCRResponse rsp = GeneralAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralAccurateOCROutcome(rsp);
        else
            return GeneralAccurateOCROutcome(o.GetError());
    }
    else
    {
        return GeneralAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralAccurateOCRAsync(const GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralAccurateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralAccurateOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralAccurateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralBasicOCROutcome OcrClient::GeneralBasicOCR(const GeneralBasicOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralBasicOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralBasicOCRResponse rsp = GeneralBasicOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralBasicOCROutcome(rsp);
        else
            return GeneralBasicOCROutcome(o.GetError());
    }
    else
    {
        return GeneralBasicOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralBasicOCRAsync(const GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralBasicOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralBasicOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralBasicOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralFastOCROutcome OcrClient::GeneralFastOCR(const GeneralFastOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralFastOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralFastOCRResponse rsp = GeneralFastOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralFastOCROutcome(rsp);
        else
            return GeneralFastOCROutcome(o.GetError());
    }
    else
    {
        return GeneralFastOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralFastOCRAsync(const GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralFastOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralFastOCROutcomeCallable OcrClient::GeneralFastOCRCallable(const GeneralFastOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralFastOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralFastOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::IDCardOCROutcome OcrClient::IDCardOCR(const IDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "IDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IDCardOCRResponse rsp = IDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IDCardOCROutcome(rsp);
        else
            return IDCardOCROutcome(o.GetError());
    }
    else
    {
        return IDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::IDCardOCRAsync(const IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IDCardOCROutcome()>>(
        [this, request]()
        {
            return this->IDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TableOCROutcome OcrClient::TableOCR(const TableOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TableOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TableOCRResponse rsp = TableOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TableOCROutcome(rsp);
        else
            return TableOCROutcome(o.GetError());
    }
    else
    {
        return TableOCROutcome(outcome.GetError());
    }
}

void OcrClient::TableOCRAsync(const TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TableOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TableOCROutcome()>>(
        [this, request]()
        {
            return this->TableOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VinOCROutcome OcrClient::VinOCR(const VinOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VinOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VinOCRResponse rsp = VinOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VinOCROutcome(rsp);
        else
            return VinOCROutcome(o.GetError());
    }
    else
    {
        return VinOCROutcome(outcome.GetError());
    }
}

void OcrClient::VinOCRAsync(const VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VinOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VinOCROutcome()>>(
        [this, request]()
        {
            return this->VinOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::WaybillOCROutcome OcrClient::WaybillOCR(const WaybillOCRRequest &request)
{
    auto outcome = MakeRequest(request, "WaybillOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WaybillOCRResponse rsp = WaybillOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WaybillOCROutcome(rsp);
        else
            return WaybillOCROutcome(o.GetError());
    }
    else
    {
        return WaybillOCROutcome(outcome.GetError());
    }
}

void OcrClient::WaybillOCRAsync(const WaybillOCRRequest& request, const WaybillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WaybillOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::WaybillOCROutcomeCallable OcrClient::WaybillOCRCallable(const WaybillOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WaybillOCROutcome()>>(
        [this, request]()
        {
            return this->WaybillOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

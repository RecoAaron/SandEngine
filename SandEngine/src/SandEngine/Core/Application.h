#pragma once
/*************************************************
 * Copyright: @SandEngine
 * Author: RecoAaron
 * Date:2020-08-15
 * Description: 应用程序定义
*************************************************/
#include "SandEngine/Core/Base.h"

namespace SandEngine {

    class SE_API CApplication
    {
    public:
        CApplication();
        virtual ~CApplication();

        /// 应用程序开始运行
        void Run();
    };

    /// 自定义创建应用程序的方法
    CApplication* CreateApplication();
}
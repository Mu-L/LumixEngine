#pragma once

#include "core/lux.h"


namespace Lux
{


class PipelineInstance;


class LUX_ENGINE_API IRenderDevice abstract
{
	public:
		virtual ~IRenderDevice() {}

		virtual void beginFrame() = 0;
		virtual void endFrame() = 0;
		virtual PipelineInstance& getPipeline() = 0;
};


} // ~namespace Lux
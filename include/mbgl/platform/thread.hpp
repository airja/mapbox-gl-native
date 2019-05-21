#pragma once

namespace mbgl {
namespace platform {

// Called when a thread is created
#if defined(__ANDROID__)
void attachThread();
#else
void attachThread() {}
#endif

// Called when a thread is destroyed
#if defined(__ANDROID__)
void detachThread();
#else
void detachThread() {}
#endif

} // namespace platform
} // namespace mbgl

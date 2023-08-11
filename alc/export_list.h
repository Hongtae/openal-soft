#ifndef ALC_EXPORT_LIST_H
#define ALC_EXPORT_LIST_H

#include "AL/alc.h"
#include "AL/al.h"
#include "AL/alext.h"

#include "inprogext.h"
#ifdef ALSOFT_EAX
#include "context.h"
#include "al/eax/x_ram.h"
#endif


struct FuncExport {
    const char *funcName;
    void *address;
};
#define DECL(x) { #x, reinterpret_cast<void*>(x) }
inline const FuncExport alcFunctions[]{
    DECL(alcCreateContext),
    DECL(alcMakeContextCurrent),
    DECL(alcProcessContext),
    DECL(alcSuspendContext),
    DECL(alcDestroyContext),
    DECL(alcGetCurrentContext),
    DECL(alcGetContextsDevice),
    DECL(alcOpenDevice),
    DECL(alcCloseDevice),
    DECL(alcGetError),
    DECL(alcIsExtensionPresent),
    DECL(alcGetProcAddress),
    DECL(alcGetEnumValue),
    DECL(alcGetString),
    DECL(alcGetIntegerv),
    DECL(alcCaptureOpenDevice),
    DECL(alcCaptureCloseDevice),
    DECL(alcCaptureStart),
    DECL(alcCaptureStop),
    DECL(alcCaptureSamples),

    DECL(alcSetThreadContext),
    DECL(alcGetThreadContext),

    DECL(alcLoopbackOpenDeviceSOFT),
    DECL(alcIsRenderFormatSupportedSOFT),
    DECL(alcRenderSamplesSOFT),

    DECL(alcDevicePauseSOFT),
    DECL(alcDeviceResumeSOFT),

    DECL(alcGetStringiSOFT),
    DECL(alcResetDeviceSOFT),

    DECL(alcGetInteger64vSOFT),

    DECL(alcReopenDeviceSOFT),

    DECL(alcEventControlSOFT),
    DECL(alcEventCallbackSOFT),

    DECL(alEnable),
    DECL(alDisable),
    DECL(alIsEnabled),
    DECL(alGetString),
    DECL(alGetBooleanv),
    DECL(alGetIntegerv),
    DECL(alGetFloatv),
    DECL(alGetDoublev),
    DECL(alGetBoolean),
    DECL(alGetInteger),
    DECL(alGetFloat),
    DECL(alGetDouble),
    DECL(alGetError),
    DECL(alIsExtensionPresent),
    DECL(alGetProcAddress),
    DECL(alGetEnumValue),
    DECL(alListenerf),
    DECL(alListener3f),
    DECL(alListenerfv),
    DECL(alListeneri),
    DECL(alListener3i),
    DECL(alListeneriv),
    DECL(alGetListenerf),
    DECL(alGetListener3f),
    DECL(alGetListenerfv),
    DECL(alGetListeneri),
    DECL(alGetListener3i),
    DECL(alGetListeneriv),
    DECL(alGenSources),
    DECL(alDeleteSources),
    DECL(alIsSource),
    DECL(alSourcef),
    DECL(alSource3f),
    DECL(alSourcefv),
    DECL(alSourcei),
    DECL(alSource3i),
    DECL(alSourceiv),
    DECL(alGetSourcef),
    DECL(alGetSource3f),
    DECL(alGetSourcefv),
    DECL(alGetSourcei),
    DECL(alGetSource3i),
    DECL(alGetSourceiv),
    DECL(alSourcePlayv),
    DECL(alSourceStopv),
    DECL(alSourceRewindv),
    DECL(alSourcePausev),
    DECL(alSourcePlay),
    DECL(alSourceStop),
    DECL(alSourceRewind),
    DECL(alSourcePause),
    DECL(alSourceQueueBuffers),
    DECL(alSourceUnqueueBuffers),
    DECL(alGenBuffers),
    DECL(alDeleteBuffers),
    DECL(alIsBuffer),
    DECL(alBufferData),
    DECL(alBufferf),
    DECL(alBuffer3f),
    DECL(alBufferfv),
    DECL(alBufferi),
    DECL(alBuffer3i),
    DECL(alBufferiv),
    DECL(alGetBufferf),
    DECL(alGetBuffer3f),
    DECL(alGetBufferfv),
    DECL(alGetBufferi),
    DECL(alGetBuffer3i),
    DECL(alGetBufferiv),
    DECL(alDopplerFactor),
    DECL(alDopplerVelocity),
    DECL(alSpeedOfSound),
    DECL(alDistanceModel),

    DECL(alGenFilters),
    DECL(alDeleteFilters),
    DECL(alIsFilter),
    DECL(alFilteri),
    DECL(alFilteriv),
    DECL(alFilterf),
    DECL(alFilterfv),
    DECL(alGetFilteri),
    DECL(alGetFilteriv),
    DECL(alGetFilterf),
    DECL(alGetFilterfv),
    DECL(alGenEffects),
    DECL(alDeleteEffects),
    DECL(alIsEffect),
    DECL(alEffecti),
    DECL(alEffectiv),
    DECL(alEffectf),
    DECL(alEffectfv),
    DECL(alGetEffecti),
    DECL(alGetEffectiv),
    DECL(alGetEffectf),
    DECL(alGetEffectfv),
    DECL(alGenAuxiliaryEffectSlots),
    DECL(alDeleteAuxiliaryEffectSlots),
    DECL(alIsAuxiliaryEffectSlot),
    DECL(alAuxiliaryEffectSloti),
    DECL(alAuxiliaryEffectSlotiv),
    DECL(alAuxiliaryEffectSlotf),
    DECL(alAuxiliaryEffectSlotfv),
    DECL(alGetAuxiliaryEffectSloti),
    DECL(alGetAuxiliaryEffectSlotiv),
    DECL(alGetAuxiliaryEffectSlotf),
    DECL(alGetAuxiliaryEffectSlotfv),

    DECL(alDeferUpdatesSOFT),
    DECL(alProcessUpdatesSOFT),

    DECL(alSourcedSOFT),
    DECL(alSource3dSOFT),
    DECL(alSourcedvSOFT),
    DECL(alGetSourcedSOFT),
    DECL(alGetSource3dSOFT),
    DECL(alGetSourcedvSOFT),
    DECL(alSourcei64SOFT),
    DECL(alSource3i64SOFT),
    DECL(alSourcei64vSOFT),
    DECL(alGetSourcei64SOFT),
    DECL(alGetSource3i64SOFT),
    DECL(alGetSourcei64vSOFT),

    DECL(alGetStringiSOFT),

    DECL(alBufferStorageSOFT),
    DECL(alMapBufferSOFT),
    DECL(alUnmapBufferSOFT),
    DECL(alFlushMappedBufferSOFT),

    DECL(alEventControlSOFT),
    DECL(alEventCallbackSOFT),
    DECL(alGetPointerSOFT),
    DECL(alGetPointervSOFT),

    DECL(alBufferCallbackSOFT),
    DECL(alGetBufferPtrSOFT),
    DECL(alGetBuffer3PtrSOFT),
    DECL(alGetBufferPtrvSOFT),

    DECL(alAuxiliaryEffectSlotPlaySOFT),
    DECL(alAuxiliaryEffectSlotPlayvSOFT),
    DECL(alAuxiliaryEffectSlotStopSOFT),
    DECL(alAuxiliaryEffectSlotStopvSOFT),

    DECL(alSourcePlayAtTimeSOFT),
    DECL(alSourcePlayAtTimevSOFT),

    DECL(alBufferSubDataSOFT),

    DECL(alBufferDataStatic),

    DECL(alDebugMessageCallbackEXT),
    DECL(alDebugMessageInsertEXT),
    DECL(alDebugMessageControlEXT),
    DECL(alPushDebugGroupEXT),
    DECL(alPopDebugGroupEXT),
    DECL(alGetDebugMessageLogEXT),

    /* Direct Context functions */
    DECL(alEnableDirect),
    DECL(alDisableDirect),
    DECL(alIsEnabledDirect),
    DECL(alDopplerFactorDirect),
    DECL(alSpeedOfSoundDirect),
    DECL(alDistanceModelDirect),
    DECL(alGetStringDirect),
    DECL(alGetBooleanvDirect),
    DECL(alGetIntegervDirect),
    DECL(alGetFloatvDirect),
    DECL(alGetDoublevDirect),
    DECL(alGetBooleanDirect),
    DECL(alGetIntegerDirect),
    DECL(alGetFloatDirect),
    DECL(alGetDoubleDirect),

    DECL(alGetErrorDirect),
    DECL(alIsExtensionPresentDirect),
    DECL(alGetProcAddress),
    DECL(alGetEnumValueDirect),

    DECL(alListeneriDirect),
    DECL(alListener3iDirect),
    DECL(alListenerivDirect),
    DECL(alListenerfDirect),
    DECL(alListener3fDirect),
    DECL(alListenerfvDirect),
    DECL(alGetListeneriDirect),
    DECL(alGetListener3iDirect),
    DECL(alGetListenerivDirect),
    DECL(alGetListenerfDirect),
    DECL(alGetListener3fDirect),
    DECL(alGetListenerfvDirect),

    DECL(alGenBuffersDirect),
    DECL(alDeleteBuffersDirect),
    DECL(alIsBufferDirect),
    DECL(alBufferDataDirect),
    DECL(alBufferiDirect),
    DECL(alBuffer3iDirect),
    DECL(alBufferivDirect),
    DECL(alBufferfDirect),
    DECL(alBuffer3fDirect),
    DECL(alBufferfvDirect),
    DECL(alGetBufferiDirect),
    DECL(alGetBuffer3iDirect),
    DECL(alGetBufferivDirect),
    DECL(alGetBufferfDirect),
    DECL(alGetBuffer3fDirect),
    DECL(alGetBufferfvDirect),

    DECL(alGenSourcesDirect),
    DECL(alDeleteSourcesDirect),
    DECL(alIsSourceDirect),
    DECL(alSourcePlayDirect),
    DECL(alSourceStopDirect),
    DECL(alSourcePauseDirect),
    DECL(alSourceRewindDirect),
    DECL(alSourcePlayvDirect),
    DECL(alSourceStopvDirect),
    DECL(alSourcePausevDirect),
    DECL(alSourceRewindvDirect),
    DECL(alSourceiDirect),
    DECL(alSource3iDirect),
    DECL(alSourceivDirect),
    DECL(alSourcefDirect),
    DECL(alSource3fDirect),
    DECL(alSourcefvDirect),
    DECL(alGetSourceiDirect),
    DECL(alGetSource3iDirect),
    DECL(alGetSourceivDirect),
    DECL(alGetSourcefDirect),
    DECL(alGetSource3fDirect),
    DECL(alGetSourcefvDirect),
    DECL(alSourceQueueBuffersDirect),
    DECL(alSourceUnqueueBuffersDirect),

    DECL(alGenFiltersDirect),
    DECL(alDeleteFiltersDirect),
    DECL(alIsFilterDirect),
    DECL(alFilteriDirect),
    DECL(alFilterivDirect),
    DECL(alFilterfDirect),
    DECL(alFilterfvDirect),
    DECL(alGetFilteriDirect),
    DECL(alGetFilterivDirect),
    DECL(alGetFilterfDirect),
    DECL(alGetFilterfvDirect),
    DECL(alGenEffectsDirect),
    DECL(alDeleteEffectsDirect),
    DECL(alIsEffectDirect),
    DECL(alEffectiDirect),
    DECL(alEffectivDirect),
    DECL(alEffectfDirect),
    DECL(alEffectfvDirect),
    DECL(alGetEffectiDirect),
    DECL(alGetEffectivDirect),
    DECL(alGetEffectfDirect),
    DECL(alGetEffectfvDirect),
    DECL(alGenAuxiliaryEffectSlotsDirect),
    DECL(alDeleteAuxiliaryEffectSlotsDirect),
    DECL(alIsAuxiliaryEffectSlotDirect),
    DECL(alAuxiliaryEffectSlotiDirect),
    DECL(alAuxiliaryEffectSlotivDirect),
    DECL(alAuxiliaryEffectSlotfDirect),
    DECL(alAuxiliaryEffectSlotfvDirect),
    DECL(alGetAuxiliaryEffectSlotiDirect),
    DECL(alGetAuxiliaryEffectSlotivDirect),
    DECL(alGetAuxiliaryEffectSlotfDirect),
    DECL(alGetAuxiliaryEffectSlotfvDirect),

    DECL(alDeferUpdatesDirectSOFT),
    DECL(alProcessUpdatesDirectSOFT),
    DECL(alGetStringiDirectSOFT),

    DECL(alBufferDataStaticDirect),
    DECL(alBufferCallbackDirectSOFT),
    DECL(alBufferSubDataDirectSOFT),
    DECL(alBufferStorageDirectSOFT),
    DECL(alMapBufferDirectSOFT),
    DECL(alUnmapBufferDirectSOFT),
    DECL(alFlushMappedBufferDirectSOFT),

    DECL(alSourcei64DirectSOFT),
    DECL(alSource3i64DirectSOFT),
    DECL(alSourcei64vDirectSOFT),
    DECL(alSourcedDirectSOFT),
    DECL(alSource3dDirectSOFT),
    DECL(alSourcedvDirectSOFT),
    DECL(alGetSourcei64DirectSOFT),
    DECL(alGetSource3i64DirectSOFT),
    DECL(alGetSourcei64vDirectSOFT),
    DECL(alGetSourcedDirectSOFT),
    DECL(alGetSource3dDirectSOFT),
    DECL(alGetSourcedvDirectSOFT),
    DECL(alSourcePlayAtTimeDirectSOFT),
    DECL(alSourcePlayAtTimevDirectSOFT),

    DECL(alEventControlDirectSOFT),
    DECL(alEventCallbackDirectSOFT),

    DECL(alDebugMessageCallbackDirectEXT),
    DECL(alDebugMessageInsertDirectEXT),
    DECL(alDebugMessageControlDirectEXT),
    DECL(alPushDebugGroupDirectEXT),
    DECL(alPopDebugGroupDirectEXT),
    DECL(alGetDebugMessageLogDirectEXT),
    DECL(alObjectLabelEXT),
    DECL(alObjectLabelDirectEXT),
    DECL(alGetObjectLabelEXT),
    DECL(alGetObjectLabelDirectEXT),

    /* Extra functions */
    DECL(alsoft_set_log_callback),
#ifdef ALSOFT_EAX
}, eaxFunctions[]{
    DECL(EAXGet),
    DECL(EAXSet),
    DECL(EAXGetBufferMode),
    DECL(EAXSetBufferMode),

    DECL(EAXGetDirect),
    DECL(EAXSetDirect),
    DECL(EAXGetBufferModeDirect),
    DECL(EAXSetBufferModeDirect),
#endif
};
#undef DECL

struct EnumExport {
    const char *enumName;
    int value;
};
#define DECL(x) { #x, (x) }
inline const EnumExport alcEnumerations[]{
    DECL(ALC_INVALID),
    DECL(ALC_FALSE),
    DECL(ALC_TRUE),

    DECL(ALC_MAJOR_VERSION),
    DECL(ALC_MINOR_VERSION),
    DECL(ALC_ATTRIBUTES_SIZE),
    DECL(ALC_ALL_ATTRIBUTES),
    DECL(ALC_DEFAULT_DEVICE_SPECIFIER),
    DECL(ALC_DEVICE_SPECIFIER),
    DECL(ALC_ALL_DEVICES_SPECIFIER),
    DECL(ALC_DEFAULT_ALL_DEVICES_SPECIFIER),
    DECL(ALC_EXTENSIONS),
    DECL(ALC_FREQUENCY),
    DECL(ALC_REFRESH),
    DECL(ALC_SYNC),
    DECL(ALC_MONO_SOURCES),
    DECL(ALC_STEREO_SOURCES),
    DECL(ALC_CAPTURE_DEVICE_SPECIFIER),
    DECL(ALC_CAPTURE_DEFAULT_DEVICE_SPECIFIER),
    DECL(ALC_CAPTURE_SAMPLES),
    DECL(ALC_CONNECTED),

    DECL(ALC_EFX_MAJOR_VERSION),
    DECL(ALC_EFX_MINOR_VERSION),
    DECL(ALC_MAX_AUXILIARY_SENDS),

    DECL(ALC_FORMAT_CHANNELS_SOFT),
    DECL(ALC_FORMAT_TYPE_SOFT),

    DECL(ALC_MONO_SOFT),
    DECL(ALC_STEREO_SOFT),
    DECL(ALC_QUAD_SOFT),
    DECL(ALC_5POINT1_SOFT),
    DECL(ALC_6POINT1_SOFT),
    DECL(ALC_7POINT1_SOFT),
    DECL(ALC_BFORMAT3D_SOFT),

    DECL(ALC_BYTE_SOFT),
    DECL(ALC_UNSIGNED_BYTE_SOFT),
    DECL(ALC_SHORT_SOFT),
    DECL(ALC_UNSIGNED_SHORT_SOFT),
    DECL(ALC_INT_SOFT),
    DECL(ALC_UNSIGNED_INT_SOFT),
    DECL(ALC_FLOAT_SOFT),

    DECL(ALC_HRTF_SOFT),
    DECL(ALC_DONT_CARE_SOFT),
    DECL(ALC_HRTF_STATUS_SOFT),
    DECL(ALC_HRTF_DISABLED_SOFT),
    DECL(ALC_HRTF_ENABLED_SOFT),
    DECL(ALC_HRTF_DENIED_SOFT),
    DECL(ALC_HRTF_REQUIRED_SOFT),
    DECL(ALC_HRTF_HEADPHONES_DETECTED_SOFT),
    DECL(ALC_HRTF_UNSUPPORTED_FORMAT_SOFT),
    DECL(ALC_NUM_HRTF_SPECIFIERS_SOFT),
    DECL(ALC_HRTF_SPECIFIER_SOFT),
    DECL(ALC_HRTF_ID_SOFT),

    DECL(ALC_AMBISONIC_LAYOUT_SOFT),
    DECL(ALC_AMBISONIC_SCALING_SOFT),
    DECL(ALC_AMBISONIC_ORDER_SOFT),
    DECL(ALC_ACN_SOFT),
    DECL(ALC_FUMA_SOFT),
    DECL(ALC_N3D_SOFT),
    DECL(ALC_SN3D_SOFT),

    DECL(ALC_OUTPUT_LIMITER_SOFT),

    DECL(ALC_DEVICE_CLOCK_SOFT),
    DECL(ALC_DEVICE_LATENCY_SOFT),
    DECL(ALC_DEVICE_CLOCK_LATENCY_SOFT),
    DECL(AL_SAMPLE_OFFSET_CLOCK_SOFT),
    DECL(AL_SEC_OFFSET_CLOCK_SOFT),

    DECL(ALC_OUTPUT_MODE_SOFT),
    DECL(ALC_ANY_SOFT),
    DECL(ALC_STEREO_BASIC_SOFT),
    DECL(ALC_STEREO_UHJ_SOFT),
    DECL(ALC_STEREO_HRTF_SOFT),
    DECL(ALC_SURROUND_5_1_SOFT),
    DECL(ALC_SURROUND_6_1_SOFT),
    DECL(ALC_SURROUND_7_1_SOFT),

    DECL(ALC_NO_ERROR),
    DECL(ALC_INVALID_DEVICE),
    DECL(ALC_INVALID_CONTEXT),
    DECL(ALC_INVALID_ENUM),
    DECL(ALC_INVALID_VALUE),
    DECL(ALC_OUT_OF_MEMORY),

    DECL(ALC_CONTEXT_FLAGS_EXT),
    DECL(ALC_CONTEXT_DEBUG_BIT_EXT),


    DECL(AL_INVALID),
    DECL(AL_NONE),
    DECL(AL_FALSE),
    DECL(AL_TRUE),

    DECL(AL_SOURCE_RELATIVE),
    DECL(AL_CONE_INNER_ANGLE),
    DECL(AL_CONE_OUTER_ANGLE),
    DECL(AL_PITCH),
    DECL(AL_POSITION),
    DECL(AL_DIRECTION),
    DECL(AL_VELOCITY),
    DECL(AL_LOOPING),
    DECL(AL_BUFFER),
    DECL(AL_GAIN),
    DECL(AL_MIN_GAIN),
    DECL(AL_MAX_GAIN),
    DECL(AL_ORIENTATION),
    DECL(AL_REFERENCE_DISTANCE),
    DECL(AL_ROLLOFF_FACTOR),
    DECL(AL_CONE_OUTER_GAIN),
    DECL(AL_MAX_DISTANCE),
    DECL(AL_SEC_OFFSET),
    DECL(AL_SAMPLE_OFFSET),
    DECL(AL_BYTE_OFFSET),
    DECL(AL_SOURCE_TYPE),
    DECL(AL_STATIC),
    DECL(AL_STREAMING),
    DECL(AL_UNDETERMINED),
    DECL(AL_METERS_PER_UNIT),
    DECL(AL_LOOP_POINTS_SOFT),
    DECL(AL_DIRECT_CHANNELS_SOFT),

    DECL(AL_DIRECT_FILTER),
    DECL(AL_AUXILIARY_SEND_FILTER),
    DECL(AL_AIR_ABSORPTION_FACTOR),
    DECL(AL_ROOM_ROLLOFF_FACTOR),
    DECL(AL_CONE_OUTER_GAINHF),
    DECL(AL_DIRECT_FILTER_GAINHF_AUTO),
    DECL(AL_AUXILIARY_SEND_FILTER_GAIN_AUTO),
    DECL(AL_AUXILIARY_SEND_FILTER_GAINHF_AUTO),

    DECL(AL_SOURCE_STATE),
    DECL(AL_INITIAL),
    DECL(AL_PLAYING),
    DECL(AL_PAUSED),
    DECL(AL_STOPPED),

    DECL(AL_BUFFERS_QUEUED),
    DECL(AL_BUFFERS_PROCESSED),

    DECL(AL_FORMAT_MONO8),
    DECL(AL_FORMAT_MONO16),
    DECL(AL_FORMAT_MONO_FLOAT32),
    DECL(AL_FORMAT_MONO_DOUBLE_EXT),
    DECL(AL_FORMAT_STEREO8),
    DECL(AL_FORMAT_STEREO16),
    DECL(AL_FORMAT_STEREO_FLOAT32),
    DECL(AL_FORMAT_STEREO_DOUBLE_EXT),
    DECL(AL_FORMAT_MONO_IMA4),
    DECL(AL_FORMAT_STEREO_IMA4),
    DECL(AL_FORMAT_MONO_MSADPCM_SOFT),
    DECL(AL_FORMAT_STEREO_MSADPCM_SOFT),
    DECL(AL_FORMAT_QUAD8_LOKI),
    DECL(AL_FORMAT_QUAD16_LOKI),
    DECL(AL_FORMAT_QUAD8),
    DECL(AL_FORMAT_QUAD16),
    DECL(AL_FORMAT_QUAD32),
    DECL(AL_FORMAT_51CHN8),
    DECL(AL_FORMAT_51CHN16),
    DECL(AL_FORMAT_51CHN32),
    DECL(AL_FORMAT_61CHN8),
    DECL(AL_FORMAT_61CHN16),
    DECL(AL_FORMAT_61CHN32),
    DECL(AL_FORMAT_71CHN8),
    DECL(AL_FORMAT_71CHN16),
    DECL(AL_FORMAT_71CHN32),
    DECL(AL_FORMAT_REAR8),
    DECL(AL_FORMAT_REAR16),
    DECL(AL_FORMAT_REAR32),
    DECL(AL_FORMAT_MONO_MULAW),
    DECL(AL_FORMAT_MONO_MULAW_EXT),
    DECL(AL_FORMAT_STEREO_MULAW),
    DECL(AL_FORMAT_STEREO_MULAW_EXT),
    DECL(AL_FORMAT_QUAD_MULAW),
    DECL(AL_FORMAT_51CHN_MULAW),
    DECL(AL_FORMAT_61CHN_MULAW),
    DECL(AL_FORMAT_71CHN_MULAW),
    DECL(AL_FORMAT_REAR_MULAW),
    DECL(AL_FORMAT_MONO_ALAW_EXT),
    DECL(AL_FORMAT_STEREO_ALAW_EXT),

    DECL(AL_FORMAT_BFORMAT2D_8),
    DECL(AL_FORMAT_BFORMAT2D_16),
    DECL(AL_FORMAT_BFORMAT2D_FLOAT32),
    DECL(AL_FORMAT_BFORMAT2D_MULAW),
    DECL(AL_FORMAT_BFORMAT3D_8),
    DECL(AL_FORMAT_BFORMAT3D_16),
    DECL(AL_FORMAT_BFORMAT3D_FLOAT32),
    DECL(AL_FORMAT_BFORMAT3D_MULAW),

    DECL(AL_FREQUENCY),
    DECL(AL_BITS),
    DECL(AL_CHANNELS),
    DECL(AL_SIZE),
    DECL(AL_UNPACK_BLOCK_ALIGNMENT_SOFT),
    DECL(AL_PACK_BLOCK_ALIGNMENT_SOFT),

    DECL(AL_SOURCE_RADIUS),

    DECL(AL_SAMPLE_OFFSET_LATENCY_SOFT),
    DECL(AL_SEC_OFFSET_LATENCY_SOFT),

    DECL(AL_STEREO_ANGLES),

    DECL(AL_UNUSED),
    DECL(AL_PENDING),
    DECL(AL_PROCESSED),

    DECL(AL_NO_ERROR),
    DECL(AL_INVALID_NAME),
    DECL(AL_INVALID_ENUM),
    DECL(AL_INVALID_VALUE),
    DECL(AL_INVALID_OPERATION),
    DECL(AL_OUT_OF_MEMORY),

    DECL(AL_VENDOR),
    DECL(AL_VERSION),
    DECL(AL_RENDERER),
    DECL(AL_EXTENSIONS),

    DECL(AL_DOPPLER_FACTOR),
    DECL(AL_DOPPLER_VELOCITY),
    DECL(AL_DISTANCE_MODEL),
    DECL(AL_SPEED_OF_SOUND),
    DECL(AL_SOURCE_DISTANCE_MODEL),
    DECL(AL_DEFERRED_UPDATES_SOFT),
    DECL(AL_GAIN_LIMIT_SOFT),

    DECL(AL_INVERSE_DISTANCE),
    DECL(AL_INVERSE_DISTANCE_CLAMPED),
    DECL(AL_LINEAR_DISTANCE),
    DECL(AL_LINEAR_DISTANCE_CLAMPED),
    DECL(AL_EXPONENT_DISTANCE),
    DECL(AL_EXPONENT_DISTANCE_CLAMPED),

    DECL(AL_FILTER_TYPE),
    DECL(AL_FILTER_NULL),
    DECL(AL_FILTER_LOWPASS),
    DECL(AL_FILTER_HIGHPASS),
    DECL(AL_FILTER_BANDPASS),

    DECL(AL_LOWPASS_GAIN),
    DECL(AL_LOWPASS_GAINHF),

    DECL(AL_HIGHPASS_GAIN),
    DECL(AL_HIGHPASS_GAINLF),

    DECL(AL_BANDPASS_GAIN),
    DECL(AL_BANDPASS_GAINHF),
    DECL(AL_BANDPASS_GAINLF),

    DECL(AL_EFFECT_TYPE),
    DECL(AL_EFFECT_NULL),
    DECL(AL_EFFECT_REVERB),
    DECL(AL_EFFECT_EAXREVERB),
    DECL(AL_EFFECT_CHORUS),
    DECL(AL_EFFECT_DISTORTION),
    DECL(AL_EFFECT_ECHO),
    DECL(AL_EFFECT_FLANGER),
    DECL(AL_EFFECT_PITCH_SHIFTER),
    DECL(AL_EFFECT_FREQUENCY_SHIFTER),
    DECL(AL_EFFECT_VOCAL_MORPHER),
    DECL(AL_EFFECT_RING_MODULATOR),
    DECL(AL_EFFECT_AUTOWAH),
    DECL(AL_EFFECT_COMPRESSOR),
    DECL(AL_EFFECT_EQUALIZER),
    DECL(AL_EFFECT_DEDICATED_LOW_FREQUENCY_EFFECT),
    DECL(AL_EFFECT_DEDICATED_DIALOGUE),

    DECL(AL_EFFECTSLOT_EFFECT),
    DECL(AL_EFFECTSLOT_GAIN),
    DECL(AL_EFFECTSLOT_AUXILIARY_SEND_AUTO),
    DECL(AL_EFFECTSLOT_NULL),

    DECL(AL_EAXREVERB_DENSITY),
    DECL(AL_EAXREVERB_DIFFUSION),
    DECL(AL_EAXREVERB_GAIN),
    DECL(AL_EAXREVERB_GAINHF),
    DECL(AL_EAXREVERB_GAINLF),
    DECL(AL_EAXREVERB_DECAY_TIME),
    DECL(AL_EAXREVERB_DECAY_HFRATIO),
    DECL(AL_EAXREVERB_DECAY_LFRATIO),
    DECL(AL_EAXREVERB_REFLECTIONS_GAIN),
    DECL(AL_EAXREVERB_REFLECTIONS_DELAY),
    DECL(AL_EAXREVERB_REFLECTIONS_PAN),
    DECL(AL_EAXREVERB_LATE_REVERB_GAIN),
    DECL(AL_EAXREVERB_LATE_REVERB_DELAY),
    DECL(AL_EAXREVERB_LATE_REVERB_PAN),
    DECL(AL_EAXREVERB_ECHO_TIME),
    DECL(AL_EAXREVERB_ECHO_DEPTH),
    DECL(AL_EAXREVERB_MODULATION_TIME),
    DECL(AL_EAXREVERB_MODULATION_DEPTH),
    DECL(AL_EAXREVERB_AIR_ABSORPTION_GAINHF),
    DECL(AL_EAXREVERB_HFREFERENCE),
    DECL(AL_EAXREVERB_LFREFERENCE),
    DECL(AL_EAXREVERB_ROOM_ROLLOFF_FACTOR),
    DECL(AL_EAXREVERB_DECAY_HFLIMIT),

    DECL(AL_REVERB_DENSITY),
    DECL(AL_REVERB_DIFFUSION),
    DECL(AL_REVERB_GAIN),
    DECL(AL_REVERB_GAINHF),
    DECL(AL_REVERB_DECAY_TIME),
    DECL(AL_REVERB_DECAY_HFRATIO),
    DECL(AL_REVERB_REFLECTIONS_GAIN),
    DECL(AL_REVERB_REFLECTIONS_DELAY),
    DECL(AL_REVERB_LATE_REVERB_GAIN),
    DECL(AL_REVERB_LATE_REVERB_DELAY),
    DECL(AL_REVERB_AIR_ABSORPTION_GAINHF),
    DECL(AL_REVERB_ROOM_ROLLOFF_FACTOR),
    DECL(AL_REVERB_DECAY_HFLIMIT),

    DECL(AL_CHORUS_WAVEFORM),
    DECL(AL_CHORUS_PHASE),
    DECL(AL_CHORUS_RATE),
    DECL(AL_CHORUS_DEPTH),
    DECL(AL_CHORUS_FEEDBACK),
    DECL(AL_CHORUS_DELAY),

    DECL(AL_DISTORTION_EDGE),
    DECL(AL_DISTORTION_GAIN),
    DECL(AL_DISTORTION_LOWPASS_CUTOFF),
    DECL(AL_DISTORTION_EQCENTER),
    DECL(AL_DISTORTION_EQBANDWIDTH),

    DECL(AL_ECHO_DELAY),
    DECL(AL_ECHO_LRDELAY),
    DECL(AL_ECHO_DAMPING),
    DECL(AL_ECHO_FEEDBACK),
    DECL(AL_ECHO_SPREAD),

    DECL(AL_FLANGER_WAVEFORM),
    DECL(AL_FLANGER_PHASE),
    DECL(AL_FLANGER_RATE),
    DECL(AL_FLANGER_DEPTH),
    DECL(AL_FLANGER_FEEDBACK),
    DECL(AL_FLANGER_DELAY),

    DECL(AL_FREQUENCY_SHIFTER_FREQUENCY),
    DECL(AL_FREQUENCY_SHIFTER_LEFT_DIRECTION),
    DECL(AL_FREQUENCY_SHIFTER_RIGHT_DIRECTION),

    DECL(AL_RING_MODULATOR_FREQUENCY),
    DECL(AL_RING_MODULATOR_HIGHPASS_CUTOFF),
    DECL(AL_RING_MODULATOR_WAVEFORM),

    DECL(AL_PITCH_SHIFTER_COARSE_TUNE),
    DECL(AL_PITCH_SHIFTER_FINE_TUNE),

    DECL(AL_COMPRESSOR_ONOFF),

    DECL(AL_EQUALIZER_LOW_GAIN),
    DECL(AL_EQUALIZER_LOW_CUTOFF),
    DECL(AL_EQUALIZER_MID1_GAIN),
    DECL(AL_EQUALIZER_MID1_CENTER),
    DECL(AL_EQUALIZER_MID1_WIDTH),
    DECL(AL_EQUALIZER_MID2_GAIN),
    DECL(AL_EQUALIZER_MID2_CENTER),
    DECL(AL_EQUALIZER_MID2_WIDTH),
    DECL(AL_EQUALIZER_HIGH_GAIN),
    DECL(AL_EQUALIZER_HIGH_CUTOFF),

    DECL(AL_DEDICATED_GAIN),

    DECL(AL_AUTOWAH_ATTACK_TIME),
    DECL(AL_AUTOWAH_RELEASE_TIME),
    DECL(AL_AUTOWAH_RESONANCE),
    DECL(AL_AUTOWAH_PEAK_GAIN),

    DECL(AL_VOCAL_MORPHER_PHONEMEA),
    DECL(AL_VOCAL_MORPHER_PHONEMEB_COARSE_TUNING),
    DECL(AL_VOCAL_MORPHER_PHONEMEB),
    DECL(AL_VOCAL_MORPHER_PHONEMEB_COARSE_TUNING),
    DECL(AL_VOCAL_MORPHER_WAVEFORM),
    DECL(AL_VOCAL_MORPHER_RATE),

    DECL(AL_EFFECTSLOT_TARGET_SOFT),

    DECL(AL_NUM_RESAMPLERS_SOFT),
    DECL(AL_DEFAULT_RESAMPLER_SOFT),
    DECL(AL_SOURCE_RESAMPLER_SOFT),
    DECL(AL_RESAMPLER_NAME_SOFT),

    DECL(AL_SOURCE_SPATIALIZE_SOFT),
    DECL(AL_AUTO_SOFT),

    DECL(AL_MAP_READ_BIT_SOFT),
    DECL(AL_MAP_WRITE_BIT_SOFT),
    DECL(AL_MAP_PERSISTENT_BIT_SOFT),
    DECL(AL_PRESERVE_DATA_BIT_SOFT),

    DECL(AL_EVENT_CALLBACK_FUNCTION_SOFT),
    DECL(AL_EVENT_CALLBACK_USER_PARAM_SOFT),
    DECL(AL_EVENT_TYPE_BUFFER_COMPLETED_SOFT),
    DECL(AL_EVENT_TYPE_SOURCE_STATE_CHANGED_SOFT),
    DECL(AL_EVENT_TYPE_DISCONNECTED_SOFT),

    DECL(AL_DROP_UNMATCHED_SOFT),
    DECL(AL_REMIX_UNMATCHED_SOFT),

    DECL(AL_AMBISONIC_LAYOUT_SOFT),
    DECL(AL_AMBISONIC_SCALING_SOFT),
    DECL(AL_FUMA_SOFT),
    DECL(AL_ACN_SOFT),
    DECL(AL_SN3D_SOFT),
    DECL(AL_N3D_SOFT),

    DECL(AL_BUFFER_CALLBACK_FUNCTION_SOFT),
    DECL(AL_BUFFER_CALLBACK_USER_PARAM_SOFT),

    DECL(AL_UNPACK_AMBISONIC_ORDER_SOFT),

    DECL(AL_EFFECT_CONVOLUTION_REVERB_SOFT),
    DECL(AL_EFFECTSLOT_STATE_SOFT),

    DECL(AL_FORMAT_UHJ2CHN8_SOFT),
    DECL(AL_FORMAT_UHJ2CHN16_SOFT),
    DECL(AL_FORMAT_UHJ2CHN_FLOAT32_SOFT),
    DECL(AL_FORMAT_UHJ3CHN8_SOFT),
    DECL(AL_FORMAT_UHJ3CHN16_SOFT),
    DECL(AL_FORMAT_UHJ3CHN_FLOAT32_SOFT),
    DECL(AL_FORMAT_UHJ4CHN8_SOFT),
    DECL(AL_FORMAT_UHJ4CHN16_SOFT),
    DECL(AL_FORMAT_UHJ4CHN_FLOAT32_SOFT),
    DECL(AL_STEREO_MODE_SOFT),
    DECL(AL_NORMAL_SOFT),
    DECL(AL_SUPER_STEREO_SOFT),
    DECL(AL_SUPER_STEREO_WIDTH_SOFT),

    DECL(AL_FORMAT_UHJ2CHN_MULAW_SOFT),
    DECL(AL_FORMAT_UHJ2CHN_ALAW_SOFT),
    DECL(AL_FORMAT_UHJ2CHN_IMA4_SOFT),
    DECL(AL_FORMAT_UHJ2CHN_MSADPCM_SOFT),
    DECL(AL_FORMAT_UHJ3CHN_MULAW_SOFT),
    DECL(AL_FORMAT_UHJ3CHN_ALAW_SOFT),
    DECL(AL_FORMAT_UHJ4CHN_MULAW_SOFT),
    DECL(AL_FORMAT_UHJ4CHN_ALAW_SOFT),

    DECL(AL_DONT_CARE_EXT),
    DECL(AL_DEBUG_OUTPUT_EXT),
    DECL(AL_DEBUG_CALLBACK_FUNCTION_EXT),
    DECL(AL_DEBUG_CALLBACK_USER_PARAM_EXT),
    DECL(AL_DEBUG_SOURCE_API_EXT),
    DECL(AL_DEBUG_SOURCE_AUDIO_SYSTEM_EXT),
    DECL(AL_DEBUG_SOURCE_THIRD_PARTY_EXT),
    DECL(AL_DEBUG_SOURCE_APPLICATION_EXT),
    DECL(AL_DEBUG_SOURCE_OTHER_EXT),
    DECL(AL_DEBUG_TYPE_ERROR_EXT),
    DECL(AL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_EXT),
    DECL(AL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_EXT),
    DECL(AL_DEBUG_TYPE_PORTABILITY_EXT),
    DECL(AL_DEBUG_TYPE_PERFORMANCE_EXT),
    DECL(AL_DEBUG_TYPE_MARKER_EXT),
    DECL(AL_DEBUG_TYPE_PUSH_GROUP_EXT),
    DECL(AL_DEBUG_TYPE_POP_GROUP_EXT),
    DECL(AL_DEBUG_TYPE_OTHER_EXT),
    DECL(AL_DEBUG_SEVERITY_HIGH_EXT),
    DECL(AL_DEBUG_SEVERITY_MEDIUM_EXT),
    DECL(AL_DEBUG_SEVERITY_LOW_EXT),
    DECL(AL_DEBUG_SEVERITY_NOTIFICATION_EXT),
    DECL(AL_DEBUG_LOGGED_MESSAGES_EXT),
    DECL(AL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_EXT),
    DECL(AL_MAX_DEBUG_MESSAGE_LENGTH_EXT),
    DECL(AL_MAX_DEBUG_LOGGED_MESSAGES_EXT),
    DECL(AL_MAX_DEBUG_GROUP_STACK_DEPTH_EXT),
    DECL(AL_MAX_LABEL_LENGTH_EXT),
    DECL(AL_STACK_OVERFLOW_EXT),
    DECL(AL_STACK_UNDERFLOW_EXT),
    DECL(AL_BUFFER_EXT),
    DECL(AL_SOURCE_EXT),
    DECL(AL_FILTER_EXT),
    DECL(AL_EFFECT_EXT),
    DECL(AL_AUXILIARY_EFFECT_SLOT_EXT),

    DECL(AL_STOP_SOURCES_ON_DISCONNECT_SOFT),
#ifdef ALSOFT_EAX
}, eaxEnumerations[]{
    DECL(AL_EAX_RAM_SIZE),
    DECL(AL_EAX_RAM_FREE),
    DECL(AL_STORAGE_AUTOMATIC),
    DECL(AL_STORAGE_HARDWARE),
    DECL(AL_STORAGE_ACCESSIBLE),
#endif // ALSOFT_EAX
};
#undef DECL

#endif /* ALC_EXPORT_LIST_H */

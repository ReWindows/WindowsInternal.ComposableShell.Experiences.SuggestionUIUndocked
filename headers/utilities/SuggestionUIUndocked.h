#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 8 member(s).
namespace WindowsInternal::ComposableShell::Experiences {
class SuggestionUIUndocked {
public:
    class ActivePackageData;
    class Authentication;
    class ClipboardAdapter;
    class DataPackageInjectionHandler;
    class DownloadedFileDeleter;
    class Font;
    class InputDelegationClient;
    class LayoutDataAdapter;
    class NativeBridge;
    class SuggestionUITelemetryProvider;
    class TelemetryCommonArgs;
    class ThumbnailGenerator;
    class WebViewTelemetryProvider;
    class __ClipboardHistoryItemActivationFactory;
    class __DataPackageProxyActivationFactory;
    class __Deprecated_FluentThemeResourcesActivationFactory;
    class __FallbackInputProfileDataActivationFactory;
    class __NativeBlobActivationFactory;
    class __NativeBridgeActivationFactory;
    class __SuggestionUIContainerActivationFactory;
    class __SuggestionUIStylesActivationFactory;
    class __WebPackageLoaderActivationFactory;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptQueueModelWorkOnDispatcher@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@YAXPE$AAVDispatcherQueue@System@Windows@@PE$AAVDispatcherQueueHandler@67@@Z
    void AttemptQueueModelWorkOnDispatcher(::Windows::System::DispatcherQueue & *, ::Windows::System::DispatcherQueueHandler & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUIThread@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVDispatcherQueue@System@Windows@@@Z
    bool IsUIThread(::Windows::System::DispatcherQueue & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringOrdinalEqualsIgnoreCase@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@0@Z
    bool StringOrdinalEqualsIgnoreCase(::Platform::String & *, ::Platform::String & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences

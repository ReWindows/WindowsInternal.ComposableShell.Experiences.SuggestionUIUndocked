#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider {
class WebPackageLoading {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebPackageLoading@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W_K@Z
    void StartActivity(wchar_t const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebPackageLoading@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~WebPackageLoading();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebPackageLoading@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebPackageLoading@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider

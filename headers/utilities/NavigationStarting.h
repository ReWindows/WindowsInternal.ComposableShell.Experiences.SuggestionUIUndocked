#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider {
class NavigationStarting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NavigationStarting@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVUri@Foundation@Windows@@_K@Z
    void StartActivity(::Windows::Foundation::Uri & *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationStarting@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~NavigationStarting();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigationStarting@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigationStarting@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider

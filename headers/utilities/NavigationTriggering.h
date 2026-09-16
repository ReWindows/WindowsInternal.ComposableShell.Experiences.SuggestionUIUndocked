#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider {
class NavigationTriggering {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NavigationTriggering@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W_K@Z
    void StartActivity(wchar_t const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationTriggering@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~NavigationTriggering();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigationTriggering@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigationTriggering@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider {
class LatestPackageDownload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LatestPackageDownload@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LatestPackageDownload@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~LatestPackageDownload();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LatestPackageDownload@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LatestPackageDownload@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::WebViewTelemetryProvider

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class HandleExpressiveTextSelection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@HandleExpressiveTextSelection@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandleExpressiveTextSelection@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4ExpressiveTextDataItemType@3456@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandleExpressiveTextSelection@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~HandleExpressiveTextSelection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandleExpressiveTextSelection@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandleExpressiveTextSelection@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

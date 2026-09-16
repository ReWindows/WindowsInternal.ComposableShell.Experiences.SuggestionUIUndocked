#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class SelectClipboardHistoryItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SelectClipboardHistoryItem@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_WI@Z
    void StartActivity(wchar_t const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectClipboardHistoryItem@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~SelectClipboardHistoryItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SelectClipboardHistoryItem@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SelectClipboardHistoryItem@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

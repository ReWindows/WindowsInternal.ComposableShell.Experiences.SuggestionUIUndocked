#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class InsertTextToEditBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@InsertTextToEditBuffer@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InsertTextToEditBuffer@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InsertTextToEditBuffer@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InsertTextToEditBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InsertTextToEditBuffer@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InsertTextToEditBuffer@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

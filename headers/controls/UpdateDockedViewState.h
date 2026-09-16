#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class UpdateDockedViewState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateDockedViewState@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4DockedViewState@3456@_NPE$AAVString@Platform@@H@Z
    void StartActivity(int, bool, ::Platform::String & *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateDockedViewState@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~UpdateDockedViewState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateDockedViewState@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateDockedViewState@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

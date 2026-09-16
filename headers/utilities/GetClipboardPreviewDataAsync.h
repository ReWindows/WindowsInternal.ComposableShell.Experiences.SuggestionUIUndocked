#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class GetClipboardPreviewDataAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W0@Z
    void StartActivity(wchar_t const *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~GetClipboardPreviewDataAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetClipboardPreviewDataAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

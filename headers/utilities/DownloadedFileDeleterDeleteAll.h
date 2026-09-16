#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 10 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class DownloadedFileDeleterDeleteAll {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFileAsyncLog@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXJ@Z
    void DeleteFileAsyncLog(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXJ@Z
    void Stop(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?__autoclassinit2@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_K@Z
    void __autoclassinit2(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~DownloadedFileDeleterDeleteAll();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DownloadedFileDeleterDeleteAll@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider

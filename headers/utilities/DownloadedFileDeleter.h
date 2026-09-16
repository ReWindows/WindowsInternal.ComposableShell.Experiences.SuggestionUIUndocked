#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class DownloadedFileDeleter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFileToDelete@DownloadedFileDeleter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXAEBUStorageFile@Storage@Windows@winrt@@@Z
    void AddFileToDelete(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFiles@DownloadedFileDeleter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void DeleteFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFilesByCertainPeriod@DownloadedFileDeleter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void DeleteFilesByCertainPeriod();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DownloadedFileDeleter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~DownloadedFileDeleter();
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked

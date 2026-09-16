#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation {
class PackageFeedTracelogging {
public:
    class WebStart_PackageMetadataCommit;
    class WebStart_PackageMetadataLoad;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebStart_ReleaseAppxReader@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@SAXXZ
    static void WebStart_ReleaseAppxReader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebStart_RestartAppxReaderReleaseTimer@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@SAXXZ
    static void WebStart_RestartAppxReaderReleaseTimer();
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation

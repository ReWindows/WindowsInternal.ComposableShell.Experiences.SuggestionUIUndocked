#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation {
class WebContentPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRequest@WebContentPackage@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AUHttpResponseMessage@Http@Web@Windows@7@AEBUhstring@7@AEBUHttpRequestMessage@9Web@Windows@7@@Z
    WindissectOpaque HandleRequest(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebContentPackage@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@AEBUhstring@6@_N10@Z
    WebContentPackage(WindissectOpaque const &, bool, bool, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebContentPackage@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@UEAA@XZ
    virtual ~WebContentPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAppxReaderReleaseTimerElapsed@WebContentPackage@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAAXUThreadPoolTimer@Threading@System@Windows@7@@Z
    void HandleAppxReaderReleaseTimerElapsed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartAppxReaderReleaseTimer@WebContentPackage@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAAXXZ
    void RestartAppxReaderReleaseTimer();
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation

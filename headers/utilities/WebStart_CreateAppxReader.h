#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures {
class WebStart_CreateAppxReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebStart_CreateAppxReader@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebStart_CreateAppxReader@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@XZ
    ~WebStart_CreateAppxReader();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebStart_CreateAppxReader@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebStart_CreateAppxReader@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures

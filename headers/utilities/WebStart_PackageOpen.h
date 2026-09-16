#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures {
class WebStart_PackageOpen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebStart_PackageOpen@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXPEB_W_N@Z
    void StartActivity(wchar_t const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebStart_PackageOpen@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXPEB_W@Z
    void Stop(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebStart_PackageOpen@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@XZ
    ~WebStart_PackageOpen();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebStart_PackageOpen@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebStart_PackageOpen@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures

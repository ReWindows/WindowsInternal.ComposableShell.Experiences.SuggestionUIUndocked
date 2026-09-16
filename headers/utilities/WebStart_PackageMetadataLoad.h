#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 10 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedTracelogging {
class WebStart_PackageMetadataLoad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebStart_PackageMetadataLoad@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXPEB_W@Z
    void StartActivity(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebStart_PackageMetadataNoFileFound@WebStart_PackageMetadataLoad@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXXZ
    void WebStart_PackageMetadataNoFileFound();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebStart_PackageMetadataLoad@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@XZ
    ~WebStart_PackageMetadataLoad();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebStart_PackageMetadataLoad@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebStart_PackageMetadataLoad@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedTracelogging


Pod::Spec.new do |s|  
    s.name              = 'DyteSdk' # Name for your pod
    s.version           = ENV['LIB_VERSION'] || '1.0'
    s.summary           = 'Beta release of dyte sdk'
    s.homepage          = 'https://dyte.in'
    s.license          = 'Apache 2'
    s.documentation_url = 'https://docs.dyte.io/ios/quickstart'
    s.author           = { 'dyte' => 'dev@dyte.in' }

    s.platforms    = { :ios => "12.0" }
    # change the source location
    s.source       = { :git => "https://github.com/dyte-in/dyte-ios-sdk.git", :tag => "#{s.version}" }
    # change the source location

    s.vendored_frameworks = 'Frameworks/DyteSdk.xcframework', 'Frameworks/WebRTC.xcframework'
    s.resources      = "Fonts/*.ttf"
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.dependency "LogRocket", "0.28.0"
end 



Pod::Spec.new do |s|
  s.name             = 'UBiMAXAdSDK'
  s.version          = '1.2.1'
  s.summary          = 'UBiMAXAdSDK'
  s.homepage         = 'https://www.ubixai.com/product/md'
  # s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhugq' => 'guoqiang.zhu@ubixai.com' }
  s.source           = { :git => 'https://github.com/ubixai/UBiMAXAdSDK.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'

  s.static_framework = true
  s.vendored_frameworks = 'UBiMAXAdSDK.framework'

  s.dependency 'UBiXDaq'

end

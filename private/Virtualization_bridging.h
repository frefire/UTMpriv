//
// Copyright © 2024 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef Virtualization_bridging_h
#define Virtualization_bridging_h

#import <Virtualization/Virtualization.h>

@interface VZMacOSBootLoader()
- (void)_setROMURL:(NSURL *_Nonnull)url;
- (NSURL *_Nullable)_romURL;
@end

@interface _VZGDBDebugStubConfiguration : NSObject <NSCopying>
@property NSInteger port;
@end

@interface VZVirtualMachineConfiguration()
- (void)_setDebugStub:(_VZGDBDebugStubConfiguration *_Nonnull)config;
@end

@interface _VZPL011SerialPortConfiguration : VZSerialPortConfiguration
- (instancetype _Nonnull)init;
@end

#endif /* Virtualization_bridging_h */

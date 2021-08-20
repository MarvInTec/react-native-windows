
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#include <react/components/view/ViewEventEmitter.h>

namespace facebook {
namespace react {

class ModalHostViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnRequestClose {
      
    };

  struct OnShow {
      
    };

  struct OnDismiss {
      
    };

  enum class OnOrientationChangeOrientation {
    Portrait,
    Landscape
  };

  static char const *toString(const OnOrientationChangeOrientation value) {
    switch (value) {
      case OnOrientationChangeOrientation::Portrait: return "portrait";
      case OnOrientationChangeOrientation::Landscape: return "landscape";
    }
  }

  struct OnOrientationChange {
      OnOrientationChangeOrientation orientation;
    };

  void onRequestClose(OnRequestClose value) const;

  void onShow(OnShow value) const;

  void onDismiss(OnDismiss value) const;

  void onOrientationChange(OnOrientationChange value) const;
};
class ActivityIndicatorViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class DatePickerEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnChange {
      Float timestamp;
    };

  void onChange(OnChange value) const;
};
class AndroidDrawerLayoutEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnDrawerSlide {
      Float offset;
    };

  struct OnDrawerStateChanged {
      int drawerState;
    };

  struct OnDrawerOpen {
      
    };

  struct OnDrawerClose {
      
    };

  void onDrawerSlide(OnDrawerSlide value) const;

  void onDrawerStateChanged(OnDrawerStateChanged value) const;

  void onDrawerOpen(OnDrawerOpen value) const;

  void onDrawerClose(OnDrawerClose value) const;
};
class RCTMaskedViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class AndroidProgressBarEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class RCTProgressViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class AndroidSwipeRefreshLayoutEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnRefresh {
      
    };

  void onRefresh(OnRefresh value) const;
};
class PullToRefreshViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnRefresh {
      
    };

  void onRefresh(OnRefresh value) const;
};
class SafeAreaViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class AndroidHorizontalScrollContentViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class RCTSegmentedControlEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnChange {
      int value;
    int selectedSegmentIndex;
    };

  void onChange(OnChange value) const;
};
class SliderEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnChange {
      double value;
    bool fromUser;
    };

  struct OnValueChange {
      double value;
    bool fromUser;
    };

  struct OnSlidingComplete {
      double value;
    bool fromUser;
    };

  void onChange(OnChange value) const;

  void onValueChange(OnValueChange value) const;

  void onSlidingComplete(OnSlidingComplete value) const;
};
class AndroidSwitchEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnChange {
      bool value;
    };

  void onChange(OnChange value) const;
};
class SwitchEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnChange {
      bool value;
    };

  void onChange(OnChange value) const;
};
class InputAccessoryEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};
class UnimplementedNativeViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  

  
};

} // namespace react
} // namespace facebook
#include <sun/net/ProgressMonitor.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/net/URL.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <sun/net/DefaultProgressMeteringPolicy.h>
#include <sun/net/ProgressEvent.h>
#include <sun/net/ProgressListener.h>
#include <sun/net/ProgressMeteringPolicy.h>
#include <sun/net/ProgressSource$State.h>
#include <sun/net/ProgressSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $DefaultProgressMeteringPolicy = ::sun::net::DefaultProgressMeteringPolicy;
using $ProgressEvent = ::sun::net::ProgressEvent;
using $ProgressListener = ::sun::net::ProgressListener;
using $ProgressMeteringPolicy = ::sun::net::ProgressMeteringPolicy;
using $ProgressSource = ::sun::net::ProgressSource;
using $ProgressSource$State = ::sun::net::ProgressSource$State;

namespace sun {
	namespace net {

$ProgressMeteringPolicy* ProgressMonitor::meteringPolicy = nullptr;
ProgressMonitor* ProgressMonitor::pm = nullptr;

void ProgressMonitor::init$() {
	$set(this, progressSourceList, $new($ArrayList));
	$set(this, progressListenerList, $new($ArrayList));
}

ProgressMonitor* ProgressMonitor::getDefault() {
	$init(ProgressMonitor);
	$synchronized(class$) {
		return ProgressMonitor::pm;
	}
}

void ProgressMonitor::setDefault(ProgressMonitor* m) {
	$init(ProgressMonitor);
	$synchronized(class$) {
		if (m != nullptr) {
			$assignStatic(ProgressMonitor::pm, m);
		}
	}
}

void ProgressMonitor::setMeteringPolicy($ProgressMeteringPolicy* policy) {
	$init(ProgressMonitor);
	$synchronized(class$) {
		if (policy != nullptr) {
			$assignStatic(ProgressMonitor::meteringPolicy, policy);
		}
	}
}

$ArrayList* ProgressMonitor::getProgressSources() {
	$useLocalObjectStack();
	$var($ArrayList, snapshot, $new($ArrayList));
	try {
		$synchronized(this->progressSourceList) {
			$var($Iterator, iter, this->progressSourceList->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressSource, pi, $cast($ProgressSource, iter->next()));
				snapshot->add($$cast($ProgressSource, $nc(pi)->clone()));
			}
		}
	} catch ($CloneNotSupportedException& e) {
		e->printStackTrace();
	}
	return snapshot;
}

int32_t ProgressMonitor::getProgressUpdateThreshold() {
	$synchronized(this) {
		return $nc(ProgressMonitor::meteringPolicy)->getProgressUpdateThreshold();
	}
}

bool ProgressMonitor::shouldMeterInput($URL* url, $String* method) {
	return $nc(ProgressMonitor::meteringPolicy)->shouldMeterInput(url, method);
}

void ProgressMonitor::registerSource($ProgressSource* pi) {
	$useLocalObjectStack();
	$synchronized(this->progressSourceList) {
		if (this->progressSourceList->contains(pi)) {
			return;
		}
		this->progressSourceList->add(pi);
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			$var($Iterator, iter, this->progressListenerList->iterator());
			for (; $nc(iter)->hasNext();) {
				listeners->add($$cast($ProgressListener, iter->next()));
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($URL, var$0, $nc(pi)->getURL());
				$var($String, var$1, pi->getMethod());
				$var($String, var$2, pi->getContentType());
				$var($ProgressSource$State, var$3, pi->getState());
				int64_t var$4 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, pi, var$0, var$1, var$2, var$3, var$4, pi->getExpected()));
				$nc(pl)->progressStart(pe);
			}
		}
	}
}

void ProgressMonitor::unregisterSource($ProgressSource* pi) {
	$useLocalObjectStack();
	$synchronized(this->progressSourceList) {
		if (this->progressSourceList->contains(pi) == false) {
			return;
		}
		$nc(pi)->close();
		this->progressSourceList->remove(pi);
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			$var($Iterator, iter, this->progressListenerList->iterator());
			for (; $nc(iter)->hasNext();) {
				listeners->add($$cast($ProgressListener, iter->next()));
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($URL, var$0, pi->getURL());
				$var($String, var$1, pi->getMethod());
				$var($String, var$2, pi->getContentType());
				$var($ProgressSource$State, var$3, pi->getState());
				int64_t var$4 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, pi, var$0, var$1, var$2, var$3, var$4, pi->getExpected()));
				$nc(pl)->progressFinish(pe);
			}
		}
	}
}

void ProgressMonitor::updateProgress($ProgressSource* pi) {
	$useLocalObjectStack();
	$synchronized(this->progressSourceList) {
		if (this->progressSourceList->contains(pi) == false) {
			return;
		}
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			$var($Iterator, iter, this->progressListenerList->iterator());
			for (; $nc(iter)->hasNext();) {
				listeners->add($$cast($ProgressListener, iter->next()));
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($URL, var$0, $nc(pi)->getURL());
				$var($String, var$1, pi->getMethod());
				$var($String, var$2, pi->getContentType());
				$var($ProgressSource$State, var$3, pi->getState());
				int64_t var$4 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, pi, var$0, var$1, var$2, var$3, var$4, pi->getExpected()));
				$nc(pl)->progressUpdate(pe);
			}
		}
	}
}

void ProgressMonitor::addProgressListener($ProgressListener* l) {
	$synchronized(this->progressListenerList) {
		this->progressListenerList->add(l);
	}
}

void ProgressMonitor::removeProgressListener($ProgressListener* l) {
	$synchronized(this->progressListenerList) {
		this->progressListenerList->remove(l);
	}
}

void ProgressMonitor::clinit$($Class* clazz) {
	$assignStatic(ProgressMonitor::meteringPolicy, $new($DefaultProgressMeteringPolicy));
	$assignStatic(ProgressMonitor::pm, $new(ProgressMonitor));
}

ProgressMonitor::ProgressMonitor() {
}

$Class* ProgressMonitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"meteringPolicy", "Lsun/net/ProgressMeteringPolicy;", nullptr, $PRIVATE | $STATIC, $staticField(ProgressMonitor, meteringPolicy)},
		{"pm", "Lsun/net/ProgressMonitor;", nullptr, $PRIVATE | $STATIC, $staticField(ProgressMonitor, pm)},
		{"progressSourceList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/net/ProgressSource;>;", $PRIVATE, $field(ProgressMonitor, progressSourceList)},
		{"progressListenerList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/net/ProgressListener;>;", $PRIVATE, $field(ProgressMonitor, progressListenerList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProgressMonitor, init$, void)},
		{"addProgressListener", "(Lsun/net/ProgressListener;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, addProgressListener, void, $ProgressListener*)},
		{"getDefault", "()Lsun/net/ProgressMonitor;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ProgressMonitor, getDefault, ProgressMonitor*)},
		{"getProgressSources", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Lsun/net/ProgressSource;>;", $PUBLIC, $virtualMethod(ProgressMonitor, getProgressSources, $ArrayList*)},
		{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ProgressMonitor, getProgressUpdateThreshold, int32_t)},
		{"registerSource", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, registerSource, void, $ProgressSource*)},
		{"removeProgressListener", "(Lsun/net/ProgressListener;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, removeProgressListener, void, $ProgressListener*)},
		{"setDefault", "(Lsun/net/ProgressMonitor;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ProgressMonitor, setDefault, void, ProgressMonitor*)},
		{"setMeteringPolicy", "(Lsun/net/ProgressMeteringPolicy;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ProgressMonitor, setMeteringPolicy, void, $ProgressMeteringPolicy*)},
		{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, shouldMeterInput, bool, $URL*, $String*)},
		{"unregisterSource", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, unregisterSource, void, $ProgressSource*)},
		{"updateProgress", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitor, updateProgress, void, $ProgressSource*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.ProgressMonitor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProgressMonitor, name, initialize, &classInfo$$, ProgressMonitor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitor);
	});
	return class$;
}

$Class* ProgressMonitor::class$ = nullptr;

	} // net
} // sun
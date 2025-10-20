#include <sun/net/ProgressMonitor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ProgressMonitor_FieldInfo_[] = {
	{"meteringPolicy", "Lsun/net/ProgressMeteringPolicy;", nullptr, $PRIVATE | $STATIC, $staticField(ProgressMonitor, meteringPolicy)},
	{"pm", "Lsun/net/ProgressMonitor;", nullptr, $PRIVATE | $STATIC, $staticField(ProgressMonitor, pm)},
	{"progressSourceList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/net/ProgressSource;>;", $PRIVATE, $field(ProgressMonitor, progressSourceList)},
	{"progressListenerList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/net/ProgressListener;>;", $PRIVATE, $field(ProgressMonitor, progressListenerList)},
	{}
};

$MethodInfo _ProgressMonitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProgressMonitor::*)()>(&ProgressMonitor::init$))},
	{"addProgressListener", "(Lsun/net/ProgressListener;)V", nullptr, $PUBLIC},
	{"getDefault", "()Lsun/net/ProgressMonitor;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ProgressMonitor*(*)()>(&ProgressMonitor::getDefault))},
	{"getProgressSources", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Lsun/net/ProgressSource;>;", $PUBLIC},
	{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"registerSource", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC},
	{"removeProgressListener", "(Lsun/net/ProgressListener;)V", nullptr, $PUBLIC},
	{"setDefault", "(Lsun/net/ProgressMonitor;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(ProgressMonitor*)>(&ProgressMonitor::setDefault))},
	{"setMeteringPolicy", "(Lsun/net/ProgressMeteringPolicy;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ProgressMeteringPolicy*)>(&ProgressMonitor::setMeteringPolicy))},
	{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"unregisterSource", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC},
	{"updateProgress", "(Lsun/net/ProgressSource;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProgressMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ProgressMonitor",
	"java.lang.Object",
	nullptr,
	_ProgressMonitor_FieldInfo_,
	_ProgressMonitor_MethodInfo_
};

$Object* allocate$ProgressMonitor($Class* clazz) {
	return $of($alloc(ProgressMonitor));
}

$ProgressMeteringPolicy* ProgressMonitor::meteringPolicy = nullptr;
ProgressMonitor* ProgressMonitor::pm = nullptr;

void ProgressMonitor::init$() {
	$set(this, progressSourceList, $new($ArrayList));
	$set(this, progressListenerList, $new($ArrayList));
}

ProgressMonitor* ProgressMonitor::getDefault() {
	$load(ProgressMonitor);
	$synchronized(class$) {
		$init(ProgressMonitor);
		return ProgressMonitor::pm;
	}
}

void ProgressMonitor::setDefault(ProgressMonitor* m) {
	$load(ProgressMonitor);
	$synchronized(class$) {
		$init(ProgressMonitor);
		if (m != nullptr) {
			$assignStatic(ProgressMonitor::pm, m);
		}
	}
}

void ProgressMonitor::setMeteringPolicy($ProgressMeteringPolicy* policy) {
	$load(ProgressMonitor);
	$synchronized(class$) {
		$init(ProgressMonitor);
		if (policy != nullptr) {
			$assignStatic(ProgressMonitor::meteringPolicy, policy);
		}
	}
}

$ArrayList* ProgressMonitor::getProgressSources() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, snapshot, $new($ArrayList));
	try {
		$synchronized(this->progressSourceList) {
			{
				$var($Iterator, iter, $nc(this->progressSourceList)->iterator());
				for (; $nc(iter)->hasNext();) {
					$var($ProgressSource, pi, $cast($ProgressSource, iter->next()));
					snapshot->add($cast($ProgressSource, $($nc(pi)->clone())));
				}
			}
		}
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
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
	$useLocalCurrentObjectStackCache();
	$synchronized(this->progressSourceList) {
		if ($nc(this->progressSourceList)->contains(pi)) {
			return;
		}
		$nc(this->progressSourceList)->add(pi);
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			{
				$var($Iterator, iter, $nc(this->progressListenerList)->iterator());
				for (; $nc(iter)->hasNext();) {
					listeners->add($cast($ProgressListener, $(iter->next())));
				}
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($ProgressSource, var$0, pi);
				$var($URL, var$1, $nc(pi)->getURL());
				$var($String, var$2, pi->getMethod());
				$var($String, var$3, pi->getContentType());
				$var($ProgressSource$State, var$4, pi->getState());
				int64_t var$5 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, var$0, var$1, var$2, var$3, var$4, var$5, pi->getExpected()));
				$nc(pl)->progressStart(pe);
			}
		}
	}
}

void ProgressMonitor::unregisterSource($ProgressSource* pi) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->progressSourceList) {
		if ($nc(this->progressSourceList)->contains(pi) == false) {
			return;
		}
		$nc(pi)->close();
		$nc(this->progressSourceList)->remove($of(pi));
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			{
				$var($Iterator, iter, $nc(this->progressListenerList)->iterator());
				for (; $nc(iter)->hasNext();) {
					listeners->add($cast($ProgressListener, $(iter->next())));
				}
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($ProgressSource, var$0, pi);
				$var($URL, var$1, $nc(pi)->getURL());
				$var($String, var$2, pi->getMethod());
				$var($String, var$3, pi->getContentType());
				$var($ProgressSource$State, var$4, pi->getState());
				int64_t var$5 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, var$0, var$1, var$2, var$3, var$4, var$5, pi->getExpected()));
				$nc(pl)->progressFinish(pe);
			}
		}
	}
}

void ProgressMonitor::updateProgress($ProgressSource* pi) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->progressSourceList) {
		if ($nc(this->progressSourceList)->contains(pi) == false) {
			return;
		}
	}
	if ($nc(this->progressListenerList)->size() > 0) {
		$var($ArrayList, listeners, $new($ArrayList));
		$synchronized(this->progressListenerList) {
			{
				$var($Iterator, iter, $nc(this->progressListenerList)->iterator());
				for (; $nc(iter)->hasNext();) {
					listeners->add($cast($ProgressListener, $(iter->next())));
				}
			}
		}
		{
			$var($Iterator, iter, listeners->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($ProgressListener, pl, $cast($ProgressListener, iter->next()));
				$var($ProgressSource, var$0, pi);
				$var($URL, var$1, $nc(pi)->getURL());
				$var($String, var$2, pi->getMethod());
				$var($String, var$3, pi->getContentType());
				$var($ProgressSource$State, var$4, pi->getState());
				int64_t var$5 = pi->getProgress();
				$var($ProgressEvent, pe, $new($ProgressEvent, var$0, var$1, var$2, var$3, var$4, var$5, pi->getExpected()));
				$nc(pl)->progressUpdate(pe);
			}
		}
	}
}

void ProgressMonitor::addProgressListener($ProgressListener* l) {
	$synchronized(this->progressListenerList) {
		$nc(this->progressListenerList)->add(l);
	}
}

void ProgressMonitor::removeProgressListener($ProgressListener* l) {
	$synchronized(this->progressListenerList) {
		$nc(this->progressListenerList)->remove($of(l));
	}
}

void clinit$ProgressMonitor($Class* class$) {
	$assignStatic(ProgressMonitor::meteringPolicy, $new($DefaultProgressMeteringPolicy));
	$assignStatic(ProgressMonitor::pm, $new(ProgressMonitor));
}

ProgressMonitor::ProgressMonitor() {
}

$Class* ProgressMonitor::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor, name, initialize, &_ProgressMonitor_ClassInfo_, clinit$ProgressMonitor, allocate$ProgressMonitor);
	return class$;
}

$Class* ProgressMonitor::class$ = nullptr;

	} // net
} // sun
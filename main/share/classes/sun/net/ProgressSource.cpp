#include <sun/net/ProgressSource.h>

#include <java/net/URL.h>
#include <sun/net/ProgressMonitor.h>
#include <sun/net/ProgressSource$State.h>
#include <jcpp.h>

#undef CONNECTED
#undef DELETE
#undef NEW
#undef UPDATE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ProgressMonitor = ::sun::net::ProgressMonitor;
using $ProgressSource$State = ::sun::net::ProgressSource$State;

namespace sun {
	namespace net {

$FieldInfo _ProgressSource_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(ProgressSource, url)},
	{"method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProgressSource, method)},
	{"contentType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProgressSource, contentType)},
	{"progress", "J", nullptr, $PRIVATE, $field(ProgressSource, progress)},
	{"lastProgress", "J", nullptr, $PRIVATE, $field(ProgressSource, lastProgress)},
	{"expected", "J", nullptr, $PRIVATE, $field(ProgressSource, expected)},
	{"state", "Lsun/net/ProgressSource$State;", nullptr, $PRIVATE, $field(ProgressSource, state)},
	{"connected", "Z", nullptr, $PRIVATE, $field(ProgressSource, connected$)},
	{"threshold", "I", nullptr, $PRIVATE, $field(ProgressSource, threshold)},
	{"progressMonitor", "Lsun/net/ProgressMonitor;", nullptr, $PRIVATE, $field(ProgressSource, progressMonitor)},
	{}
};

$MethodInfo _ProgressSource_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProgressSource, init$, void, $URL*, $String*)},
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(ProgressSource, init$, void, $URL*, $String*, int64_t)},
	{"beginTracking", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressSource, beginTracking, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressSource, close, void)},
	{"connected", "()Z", nullptr, $PUBLIC, $virtualMethod(ProgressSource, connected, bool)},
	{"finishTracking", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressSource, finishTracking, void)},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getContentType, $String*)},
	{"getExpected", "()J", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getExpected, int64_t)},
	{"getMethod", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getMethod, $String*)},
	{"getProgress", "()J", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getProgress, int64_t)},
	{"getState", "()Lsun/net/ProgressSource$State;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getState, $ProgressSource$State*)},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, getURL, $URL*)},
	{"setContentType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ProgressSource, setContentType, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProgressSource, toString, $String*)},
	{"updateProgress", "(JJ)V", nullptr, $PUBLIC, $virtualMethod(ProgressSource, updateProgress, void, int64_t, int64_t)},
	{}
};

$InnerClassInfo _ProgressSource_InnerClassesInfo_[] = {
	{"sun.net.ProgressSource$State", "sun.net.ProgressSource", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ProgressSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ProgressSource",
	"java.lang.Object",
	nullptr,
	_ProgressSource_FieldInfo_,
	_ProgressSource_MethodInfo_,
	nullptr,
	nullptr,
	_ProgressSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.ProgressSource$State"
};

$Object* allocate$ProgressSource($Class* clazz) {
	return $of($alloc(ProgressSource));
}

void ProgressSource::init$($URL* url, $String* method) {
	ProgressSource::init$(url, method, -1);
}

void ProgressSource::init$($URL* url, $String* method, int64_t expected) {
	this->progress = 0;
	this->lastProgress = 0;
	this->expected = -1;
	this->connected$ = false;
	this->threshold = 8192;
	$set(this, url, url);
	$set(this, method, method);
	$set(this, contentType, "content/unknown"_s);
	this->progress = 0;
	this->lastProgress = 0;
	this->expected = expected;
	$init($ProgressSource$State);
	$set(this, state, $ProgressSource$State::NEW);
	$set(this, progressMonitor, $ProgressMonitor::getDefault());
	this->threshold = $nc(this->progressMonitor)->getProgressUpdateThreshold();
}

bool ProgressSource::connected() {
	if (!this->connected$) {
		this->connected$ = true;
		$init($ProgressSource$State);
		$set(this, state, $ProgressSource$State::CONNECTED);
		return false;
	}
	return true;
}

void ProgressSource::close() {
	$init($ProgressSource$State);
	$set(this, state, $ProgressSource$State::DELETE);
}

$URL* ProgressSource::getURL() {
	return this->url;
}

$String* ProgressSource::getMethod() {
	return this->method;
}

$String* ProgressSource::getContentType() {
	return this->contentType;
}

void ProgressSource::setContentType($String* ct) {
	$set(this, contentType, ct);
}

int64_t ProgressSource::getProgress() {
	return this->progress;
}

int64_t ProgressSource::getExpected() {
	return this->expected;
}

$ProgressSource$State* ProgressSource::getState() {
	return this->state;
}

void ProgressSource::beginTracking() {
	$nc(this->progressMonitor)->registerSource(this);
}

void ProgressSource::finishTracking() {
	$nc(this->progressMonitor)->unregisterSource(this);
}

void ProgressSource::updateProgress(int64_t latestProgress, int64_t expectedProgress) {
	this->lastProgress = this->progress;
	this->progress = latestProgress;
	this->expected = expectedProgress;
	if (connected() == false) {
		$init($ProgressSource$State);
		$set(this, state, $ProgressSource$State::CONNECTED);
	} else {
		$init($ProgressSource$State);
		$set(this, state, $ProgressSource$State::UPDATE);
	}
	if ($div(this->lastProgress, this->threshold) != $div(this->progress, this->threshold)) {
		$nc(this->progressMonitor)->updateProgress(this);
	}
	if (this->expected != -1) {
		if (this->progress >= this->expected && this->progress != 0) {
			close();
		}
	}
}

$Object* ProgressSource::clone() {
	return $of($Object::clone());
}

$String* ProgressSource::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[url="_s, this->url, ", method="_s, this->method, ", state="_s, this->state, ", content-type="_s, this->contentType, ", progress="_s, $$str(this->progress), ", expected="_s, $$str(this->expected), "]"_s});
}

ProgressSource::ProgressSource() {
}

$Class* ProgressSource::load$($String* name, bool initialize) {
	$loadClass(ProgressSource, name, initialize, &_ProgressSource_ClassInfo_, allocate$ProgressSource);
	return class$;
}

$Class* ProgressSource::class$ = nullptr;

	} // net
} // sun
#include <java/lang/ThreadGroup.h>

#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadDeath.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef MAX_PRIORITY
#undef MIN_PRIORITY

using $ThreadGroupArray = $Array<::java::lang::ThreadGroup>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $Void = ::java::lang::Void;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {

$NamedAttribute ThreadGroup_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_allowThreadSuspension9[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$0},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$1[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_checkAccess10[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$1},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$2[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_destroy12[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$2},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$3[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_isDaemon23[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$3},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$4[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_isDestroyed24[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$4},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$5[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_resume30[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$5},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$6[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_setDaemon31[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$6},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$7[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_stop33[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$7},
	{}
};

$NamedAttribute ThreadGroup_Attribute_var$8[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ThreadGroup_MethodAnnotations_suspend35[] = {
	{"Ljava/lang/Deprecated;", ThreadGroup_Attribute_var$8},
	{}
};

$FieldInfo _ThreadGroup_FieldInfo_[] = {
	{"parent", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $FINAL, $field(ThreadGroup, parent)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(ThreadGroup, name)},
	{"maxPriority", "I", nullptr, 0, $field(ThreadGroup, maxPriority)},
	{"destroyed", "Z", nullptr, 0, $field(ThreadGroup, destroyed)},
	{"daemon", "Z", nullptr, 0, $field(ThreadGroup, daemon)},
	{"nUnstartedThreads", "I", nullptr, 0, $field(ThreadGroup, nUnstartedThreads)},
	{"nthreads", "I", nullptr, 0, $field(ThreadGroup, nthreads)},
	{"threads", "[Ljava/lang/Thread;", nullptr, 0, $field(ThreadGroup, threads)},
	{"ngroups", "I", nullptr, 0, $field(ThreadGroup, ngroups)},
	{"groups", "[Ljava/lang/ThreadGroup;", nullptr, 0, $field(ThreadGroup, groups)},
	{}
};

$MethodInfo _ThreadGroup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadGroup, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ThreadGroup, init$, void, $String*)},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ThreadGroup, init$, void, ThreadGroup*, $String*)},
	{"<init>", "(Ljava/lang/Void;Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ThreadGroup, init$, void, $Void*, ThreadGroup*, $String*)},
	{"activeCount", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, activeCount, int32_t)},
	{"activeGroupCount", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, activeGroupCount, int32_t)},
	{"add", "(Ljava/lang/ThreadGroup;)V", nullptr, $PRIVATE | $FINAL, $method(ThreadGroup, add, void, ThreadGroup*)},
	{"add", "(Ljava/lang/Thread;)V", nullptr, 0, $virtualMethod(ThreadGroup, add, void, $Thread*)},
	{"addUnstarted", "()V", nullptr, 0, $virtualMethod(ThreadGroup, addUnstarted, void)},
	{"allowThreadSuspension", "(Z)Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ThreadGroup, allowThreadSuspension, bool, bool), nullptr, nullptr, _ThreadGroup_MethodAnnotations_allowThreadSuspension9},
	{"checkAccess", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, checkAccess, void), nullptr, nullptr, _ThreadGroup_MethodAnnotations_checkAccess10},
	{"checkParentAccess", "(Ljava/lang/ThreadGroup;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(ThreadGroup, checkParentAccess, $Void*, ThreadGroup*)},
	{"destroy", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, destroy, void), nullptr, nullptr, _ThreadGroup_MethodAnnotations_destroy12},
	{"enumerate", "([Ljava/lang/Thread;)I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, enumerate, int32_t, $ThreadArray*)},
	{"enumerate", "([Ljava/lang/Thread;Z)I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, enumerate, int32_t, $ThreadArray*, bool)},
	{"enumerate", "([Ljava/lang/Thread;IZ)I", nullptr, $PRIVATE, $method(ThreadGroup, enumerate, int32_t, $ThreadArray*, int32_t, bool)},
	{"enumerate", "([Ljava/lang/ThreadGroup;)I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, enumerate, int32_t, $ThreadGroupArray*)},
	{"enumerate", "([Ljava/lang/ThreadGroup;Z)I", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, enumerate, int32_t, $ThreadGroupArray*, bool)},
	{"enumerate", "([Ljava/lang/ThreadGroup;IZ)I", nullptr, $PRIVATE, $method(ThreadGroup, enumerate, int32_t, $ThreadGroupArray*, int32_t, bool)},
	{"getMaxPriority", "()I", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, getMaxPriority, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, getName, $String*)},
	{"getParent", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, getParent, ThreadGroup*)},
	{"interrupt", "()V", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, interrupt, void)},
	{"isDaemon", "()Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, isDaemon, bool), nullptr, nullptr, _ThreadGroup_MethodAnnotations_isDaemon23},
	{"isDestroyed", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(ThreadGroup, isDestroyed, bool), nullptr, nullptr, _ThreadGroup_MethodAnnotations_isDestroyed24},
	{"list", "()V", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, list, void)},
	{"list", "(Ljava/io/PrintStream;I)V", nullptr, 0, $virtualMethod(ThreadGroup, list, void, $PrintStream*, int32_t)},
	{"parentOf", "(Ljava/lang/ThreadGroup;)Z", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, parentOf, bool, ThreadGroup*)},
	{"remove", "(Ljava/lang/ThreadGroup;)V", nullptr, $PRIVATE, $method(ThreadGroup, remove, void, ThreadGroup*)},
	{"remove", "(Ljava/lang/Thread;)V", nullptr, $PRIVATE, $method(ThreadGroup, remove, void, $Thread*)},
	{"resume", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, resume, void), nullptr, nullptr, _ThreadGroup_MethodAnnotations_resume30},
	{"setDaemon", "(Z)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, setDaemon, void, bool), nullptr, nullptr, _ThreadGroup_MethodAnnotations_setDaemon31},
	{"setMaxPriority", "(I)V", nullptr, $PUBLIC | $FINAL, $method(ThreadGroup, setMaxPriority, void, int32_t)},
	{"stop", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, stop, void), nullptr, nullptr, _ThreadGroup_MethodAnnotations_stop33},
	{"stopOrSuspend", "(Z)Z", nullptr, $PRIVATE, $method(ThreadGroup, stopOrSuspend, bool, bool)},
	{"suspend", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(ThreadGroup, suspend, void), nullptr, nullptr, _ThreadGroup_MethodAnnotations_suspend35},
	{"threadStartFailed", "(Ljava/lang/Thread;)V", nullptr, 0, $virtualMethod(ThreadGroup, threadStartFailed, void, $Thread*)},
	{"threadTerminated", "(Ljava/lang/Thread;)V", nullptr, 0, $virtualMethod(ThreadGroup, threadTerminated, void, $Thread*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, toString, $String*)},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ThreadGroup, uncaughtException, void, $Thread*, $Throwable*)},
	{}
};

$InnerClassInfo _ThreadGroup_InnerClassesInfo_[] = {
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ThreadGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ThreadGroup",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	_ThreadGroup_FieldInfo_,
	_ThreadGroup_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadGroup_InnerClassesInfo_
};

$Object* allocate$ThreadGroup($Class* clazz) {
	return $of($alloc(ThreadGroup));
}

void ThreadGroup::init$() {
	this->nUnstartedThreads = 0;
	$set(this, name, "system"_s);
	this->maxPriority = $Thread::MAX_PRIORITY;
	$set(this, parent, nullptr);
}

void ThreadGroup::init$($String* name) {
	$useLocalCurrentObjectStackCache();
	ThreadGroup::init$($($($Thread::currentThread())->getThreadGroup()), name);
}

void ThreadGroup::init$(ThreadGroup* parent, $String* name) {
	ThreadGroup::init$($(checkParentAccess(parent)), parent, name);
}

void ThreadGroup::init$($Void* unused, ThreadGroup* parent, $String* name) {
	this->nUnstartedThreads = 0;
	$set(this, name, name);
	this->maxPriority = $nc(parent)->maxPriority;
	this->daemon = parent->daemon;
	$set(this, parent, parent);
	parent->add(this);
}

$Void* ThreadGroup::checkParentAccess(ThreadGroup* parent) {
	$init(ThreadGroup);
	$nc(parent)->checkAccess();
	return nullptr;
}

$String* ThreadGroup::getName() {
	return this->name;
}

ThreadGroup* ThreadGroup::getParent() {
	if (this->parent != nullptr) {
		$nc(this->parent)->checkAccess();
	}
	return this->parent;
}

int32_t ThreadGroup::getMaxPriority() {
	return this->maxPriority;
}

bool ThreadGroup::isDaemon() {
	return this->daemon;
}

bool ThreadGroup::isDestroyed() {
	$synchronized(this) {
		return this->destroyed;
	}
}

void ThreadGroup::setDaemon(bool daemon) {
	checkAccess();
	this->daemon = daemon;
}

void ThreadGroup::setMaxPriority(int32_t pri) {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		checkAccess();
		if (pri < $Thread::MIN_PRIORITY || pri > $Thread::MAX_PRIORITY) {
			return;
		}
		this->maxPriority = (this->parent != nullptr) ? $Math::min(pri, $nc(this->parent)->maxPriority) : pri;
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		$nc($nc(groupsSnapshot)->get(i))->setMaxPriority(pri);
	}
}

bool ThreadGroup::parentOf(ThreadGroup* g$renamed) {
	$var(ThreadGroup, g, g$renamed);
	for (; g != nullptr; $assign(g, $nc(g)->parent)) {
		if (g == this) {
			return true;
		}
	}
	return false;
}

void ThreadGroup::checkAccess() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkAccess(this);
	}
}

int32_t ThreadGroup::activeCount() {
	int32_t result = 0;
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		if (this->destroyed) {
			return 0;
		}
		result = this->nthreads;
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		result += $nc($nc(groupsSnapshot)->get(i))->activeCount();
	}
	return result;
}

int32_t ThreadGroup::enumerate($ThreadArray* list) {
	checkAccess();
	return enumerate(list, 0, true);
}

int32_t ThreadGroup::enumerate($ThreadArray* list, bool recurse) {
	checkAccess();
	return enumerate(list, 0, recurse);
}

int32_t ThreadGroup::enumerate($ThreadArray* list, int32_t n, bool recurse) {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		if (this->destroyed) {
			return n;
		}
		int32_t nt = this->nthreads;
		if (nt > $nc(list)->length - n) {
			nt = list->length - n;
		}
		for (int32_t i = 0; i < nt; ++i) {
			if ($nc($nc(this->threads)->get(i))->isAlive()) {
				$nc(list)->set(n++, $nc(this->threads)->get(i));
			}
		}
		if (recurse) {
			ngroupsSnapshot = this->ngroups;
			if (this->groups != nullptr) {
				$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
			} else {
				$assign(groupsSnapshot, nullptr);
			}
		}
	}
	if (recurse) {
		for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
			n = $nc($nc(groupsSnapshot)->get(i))->enumerate(list, n, true);
		}
	}
	return n;
}

int32_t ThreadGroup::activeGroupCount() {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		if (this->destroyed) {
			return 0;
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	int32_t n = ngroupsSnapshot;
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		n += $nc($nc(groupsSnapshot)->get(i))->activeGroupCount();
	}
	return n;
}

int32_t ThreadGroup::enumerate($ThreadGroupArray* list) {
	checkAccess();
	return enumerate(list, 0, true);
}

int32_t ThreadGroup::enumerate($ThreadGroupArray* list, bool recurse) {
	checkAccess();
	return enumerate(list, 0, recurse);
}

int32_t ThreadGroup::enumerate($ThreadGroupArray* list, int32_t n, bool recurse) {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		if (this->destroyed) {
			return n;
		}
		int32_t ng = this->ngroups;
		if (ng > $nc(list)->length - n) {
			ng = list->length - n;
		}
		if (ng > 0) {
			$System::arraycopy(this->groups, 0, list, n, ng);
			n += ng;
		}
		if (recurse) {
			ngroupsSnapshot = this->ngroups;
			if (this->groups != nullptr) {
				$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
			} else {
				$assign(groupsSnapshot, nullptr);
			}
		}
	}
	if (recurse) {
		for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
			n = $nc($nc(groupsSnapshot)->get(i))->enumerate(list, n, true);
		}
	}
	return n;
}

void ThreadGroup::stop() {
	if (stopOrSuspend(false)) {
		$($Thread::currentThread())->stop();
	}
}

void ThreadGroup::interrupt() {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		checkAccess();
		for (int32_t i = 0; i < this->nthreads; ++i) {
			$nc($nc(this->threads)->get(i))->interrupt();
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		$nc($nc(groupsSnapshot)->get(i))->interrupt();
	}
}

void ThreadGroup::suspend() {
	if (stopOrSuspend(true)) {
		$($Thread::currentThread())->suspend();
	}
}

bool ThreadGroup::stopOrSuspend(bool suspend) {
	$useLocalCurrentObjectStackCache();
	bool suicide = false;
	$var($Thread, us, $Thread::currentThread());
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		checkAccess();
		for (int32_t i = 0; i < this->nthreads; ++i) {
			if ($nc(this->threads)->get(i) == us) {
				suicide = true;
			} else if (suspend) {
				$nc($nc(this->threads)->get(i))->suspend();
			} else {
				$nc($nc(this->threads)->get(i))->stop();
			}
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		suicide = $nc($nc(groupsSnapshot)->get(i))->stopOrSuspend(suspend) || suicide;
	}
	return suicide;
}

void ThreadGroup::resume() {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		checkAccess();
		for (int32_t i = 0; i < this->nthreads; ++i) {
			$nc($nc(this->threads)->get(i))->resume();
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		$nc($nc(groupsSnapshot)->get(i))->resume();
	}
}

void ThreadGroup::destroy() {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		checkAccess();
		if (this->destroyed || (this->nthreads > 0)) {
			$throwNew($IllegalThreadStateException);
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
		if (this->parent != nullptr) {
			this->destroyed = true;
			this->ngroups = 0;
			$set(this, groups, nullptr);
			this->nthreads = 0;
			$set(this, threads, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; i += 1) {
		$nc($nc(groupsSnapshot)->get(i))->destroy();
	}
	if (this->parent != nullptr) {
		$nc(this->parent)->remove(this);
	}
}

void ThreadGroup::add(ThreadGroup* g) {
	$synchronized(this) {
		if (this->destroyed) {
			$throwNew($IllegalThreadStateException);
		}
		if (this->groups == nullptr) {
			$set(this, groups, $new($ThreadGroupArray, 4));
		} else if (this->ngroups == $nc(this->groups)->length) {
			$set(this, groups, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, this->ngroups * 2)));
		}
		$nc(this->groups)->set(this->ngroups, g);
		++this->ngroups;
	}
}

void ThreadGroup::remove(ThreadGroup* g) {
	$synchronized(this) {
		if (this->destroyed) {
			return;
		}
		for (int32_t i = 0; i < this->ngroups; ++i) {
			if ($nc(this->groups)->get(i) == g) {
				this->ngroups -= 1;
				$System::arraycopy(this->groups, i + 1, this->groups, i, this->ngroups - i);
				$nc(this->groups)->set(this->ngroups, nullptr);
				break;
			}
		}
		if (this->nthreads == 0) {
			$of(this)->notifyAll();
		}
		if (this->daemon && (this->nthreads == 0) && (this->nUnstartedThreads == 0) && (this->ngroups == 0)) {
			destroy();
		}
	}
}

void ThreadGroup::addUnstarted() {
	$synchronized(this) {
		if (this->destroyed) {
			$throwNew($IllegalThreadStateException);
		}
		++this->nUnstartedThreads;
	}
}

void ThreadGroup::add($Thread* t) {
	$synchronized(this) {
		if (this->destroyed) {
			$throwNew($IllegalThreadStateException);
		}
		if (this->threads == nullptr) {
			$set(this, threads, $new($ThreadArray, 4));
		} else if (this->nthreads == $nc(this->threads)->length) {
			$set(this, threads, $fcast($ThreadArray, $Arrays::copyOf(this->threads, this->nthreads * 2)));
		}
		$nc(this->threads)->set(this->nthreads, t);
		++this->nthreads;
		--this->nUnstartedThreads;
	}
}

void ThreadGroup::threadStartFailed($Thread* t) {
	$synchronized(this) {
		remove(t);
		++this->nUnstartedThreads;
	}
}

void ThreadGroup::threadTerminated($Thread* t) {
	$synchronized(this) {
		remove(t);
		if (this->nthreads == 0) {
			$of(this)->notifyAll();
		}
		if (this->daemon && (this->nthreads == 0) && (this->nUnstartedThreads == 0) && (this->ngroups == 0)) {
			destroy();
		}
	}
}

void ThreadGroup::remove($Thread* t) {
	$synchronized(this) {
		if (this->destroyed) {
			return;
		}
		for (int32_t i = 0; i < this->nthreads; ++i) {
			if ($nc(this->threads)->get(i) == t) {
				$System::arraycopy(this->threads, i + 1, this->threads, i, --this->nthreads - i);
				$nc(this->threads)->set(this->nthreads, nullptr);
				break;
			}
		}
	}
}

void ThreadGroup::list() {
	list($System::out, 0);
}

void ThreadGroup::list($PrintStream* out, int32_t indent) {
	int32_t ngroupsSnapshot = 0;
	$var($ThreadGroupArray, groupsSnapshot, nullptr);
	$synchronized(this) {
		for (int32_t j = 0; j < indent; ++j) {
			$nc(out)->print(" "_s);
		}
		$nc(out)->println($of(this));
		indent += 4;
		for (int32_t i = 0; i < this->nthreads; ++i) {
			for (int32_t j = 0; j < indent; ++j) {
				out->print(" "_s);
			}
			out->println($of($nc(this->threads)->get(i)));
		}
		ngroupsSnapshot = this->ngroups;
		if (this->groups != nullptr) {
			$assign(groupsSnapshot, $fcast($ThreadGroupArray, $Arrays::copyOf(this->groups, ngroupsSnapshot)));
		} else {
			$assign(groupsSnapshot, nullptr);
		}
	}
	for (int32_t i = 0; i < ngroupsSnapshot; ++i) {
		$nc($nc(groupsSnapshot)->get(i))->list(out, indent);
	}
}

void ThreadGroup::uncaughtException($Thread* t, $Throwable* e) {
	$useLocalCurrentObjectStackCache();
	if (this->parent != nullptr) {
		$nc(this->parent)->uncaughtException(t, e);
	} else {
		$var($Thread$UncaughtExceptionHandler, ueh, $Thread::getDefaultUncaughtExceptionHandler());
		if (ueh != nullptr) {
			ueh->uncaughtException(t, e);
		} else if (!($instanceOf($ThreadDeath, e))) {
			$nc($System::err)->print($$str({"Exception in thread \""_s, $($nc(t)->getName()), "\" "_s}));
			$nc(e)->printStackTrace($System::err);
		}
	}
}

bool ThreadGroup::allowThreadSuspension(bool b) {
	return true;
}

$String* ThreadGroup::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), "[name="_s}));
	$var($String, var$2, $$concat(var$3, $(getName())));
	$var($String, var$1, $$concat(var$2, ",maxpri="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->maxPriority)));
	return $concat(var$0, "]"_s);
}

ThreadGroup::ThreadGroup() {
}

$Class* ThreadGroup::load$($String* name, bool initialize) {
	$loadClass(ThreadGroup, name, initialize, &_ThreadGroup_ClassInfo_, allocate$ThreadGroup);
	return class$;
}

$Class* ThreadGroup::class$ = nullptr;

	} // lang
} // java
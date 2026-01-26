#include <java/util/Observable.h>

#include <java/util/Observer.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Observer = ::java::util::Observer;
using $Vector = ::java::util::Vector;

namespace java {
	namespace util {

$NamedAttribute Observable_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Observable_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Observable_Attribute_var$0},
	{}
};

$FieldInfo _Observable_FieldInfo_[] = {
	{"changed", "Z", nullptr, $PRIVATE, $field(Observable, changed)},
	{"obs", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/util/Observer;>;", $PRIVATE, $field(Observable, obs)},
	{}
};

$MethodInfo _Observable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Observable, init$, void)},
	{"addObserver", "(Ljava/util/Observer;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Observable, addObserver, void, $Observer*)},
	{"clearChanged", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(Observable, clearChanged, void)},
	{"countObservers", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Observable, countObservers, int32_t)},
	{"deleteObserver", "(Ljava/util/Observer;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Observable, deleteObserver, void, $Observer*)},
	{"deleteObservers", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Observable, deleteObservers, void)},
	{"hasChanged", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Observable, hasChanged, bool)},
	{"notifyObservers", "()V", nullptr, $PUBLIC, $virtualMethod(Observable, notifyObservers, void)},
	{"notifyObservers", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Observable, notifyObservers, void, Object$*)},
	{"setChanged", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(Observable, setChanged, void)},
	{}
};

$ClassInfo _Observable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Observable",
	"java.lang.Object",
	nullptr,
	_Observable_FieldInfo_,
	_Observable_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Observable_Annotations_
};

$Object* allocate$Observable($Class* clazz) {
	return $of($alloc(Observable));
}

void Observable::init$() {
	this->changed = false;
	$set(this, obs, $new($Vector));
}

void Observable::addObserver($Observer* o) {
	$synchronized(this) {
		if (o == nullptr) {
			$throwNew($NullPointerException);
		}
		if (!$nc(this->obs)->contains(o)) {
			$nc(this->obs)->addElement(o);
		}
	}
}

void Observable::deleteObserver($Observer* o) {
	$synchronized(this) {
		$nc(this->obs)->removeElement(o);
	}
}

void Observable::notifyObservers() {
	notifyObservers(nullptr);
}

void Observable::notifyObservers(Object$* arg) {
	$var($ObjectArray, arrLocal, nullptr);
	$synchronized(this) {
		if (!this->changed) {
			return;
		}
		$assign(arrLocal, $nc(this->obs)->toArray());
		clearChanged();
	}
	for (int32_t i = $nc(arrLocal)->length - 1; i >= 0; --i) {
		$nc(($cast($Observer, arrLocal->get(i))))->update(this, arg);
	}
}

void Observable::deleteObservers() {
	$synchronized(this) {
		$nc(this->obs)->removeAllElements();
	}
}

void Observable::setChanged() {
	$synchronized(this) {
		this->changed = true;
	}
}

void Observable::clearChanged() {
	$synchronized(this) {
		this->changed = false;
	}
}

bool Observable::hasChanged() {
	$synchronized(this) {
		return this->changed;
	}
}

int32_t Observable::countObservers() {
	$synchronized(this) {
		return $nc(this->obs)->size();
	}
}

Observable::Observable() {
}

$Class* Observable::load$($String* name, bool initialize) {
	$loadClass(Observable, name, initialize, &_Observable_ClassInfo_, allocate$Observable);
	return class$;
}

$Class* Observable::class$ = nullptr;

	} // util
} // java
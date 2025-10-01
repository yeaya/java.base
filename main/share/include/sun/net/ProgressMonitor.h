#ifndef _sun_net_ProgressMonitor_h_
#define _sun_net_ProgressMonitor_h_
//$ class sun.net.ProgressMonitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace net {
		class ProgressListener;
		class ProgressMeteringPolicy;
		class ProgressSource;
	}
}

namespace sun {
	namespace net {

class $import ProgressMonitor : public ::java::lang::Object {
	$class(ProgressMonitor, 0, ::java::lang::Object)
public:
	ProgressMonitor();
	void init$();
	virtual void addProgressListener(::sun::net::ProgressListener* l);
	static ::sun::net::ProgressMonitor* getDefault();
	virtual ::java::util::ArrayList* getProgressSources();
	virtual int32_t getProgressUpdateThreshold();
	virtual void registerSource(::sun::net::ProgressSource* pi);
	virtual void removeProgressListener(::sun::net::ProgressListener* l);
	static void setDefault(::sun::net::ProgressMonitor* m);
	static void setMeteringPolicy(::sun::net::ProgressMeteringPolicy* policy);
	virtual bool shouldMeterInput(::java::net::URL* url, $String* method);
	virtual void unregisterSource(::sun::net::ProgressSource* pi);
	virtual void updateProgress(::sun::net::ProgressSource* pi);
	static ::sun::net::ProgressMeteringPolicy* meteringPolicy;
	static ::sun::net::ProgressMonitor* pm;
	::java::util::ArrayList* progressSourceList = nullptr;
	::java::util::ArrayList* progressListenerList = nullptr;
};

	} // net
} // sun

#endif // _sun_net_ProgressMonitor_h_
/*
 * \brief  CPU definition for Raspberry Pi
 * \author Norman Feske
 * \date   2013-04-11
 */

/*
 * Copyright (C) 2013 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU General Public License version 2.
 */

#ifndef _RPI__PROCESSOR_DRIVER_H_
#define _RPI__PROCESSOR_DRIVER_H_

/* core includes */
#include <processor_driver/arm_v6.h>

namespace Genode { class Processor_driver : public Arm_v6::Processor_driver { }; }

namespace Kernel { typedef Genode::Processor_driver Processor_driver; }

#endif /* _RPI__PROCESSOR_DRIVER_H_ */


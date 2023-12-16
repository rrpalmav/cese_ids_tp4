/************************************************************************************************
Copyright (c) 2023, Ricardo Palma <rrpalmav@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef GPIO_H
#define GPIO_H

/** @file
 ** @brief Capa de abstraccion para gestion de partidas digitales
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

typedef struct gpio_h * gpio_t;

/* === Public data type declarations =========================================================== */

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Implementacion de las funciones del proyecto
 *
 *
 */
gpio_t GpioCreate(uint8_t port, uint8_t bit);

/**
 * @brief Funcion para establecer el tipo de salida un puerto digital
 * 
 * @param gpio_t Puntero de objeto obtenido al llamar a la funcion GpioCreate.
 * @param bool El valor de la salida.
 * @return void
*/
void GpioSetDirection(gpio_t self, bool output);

/**
 * @brief Funcion para establecer el estado un puerto digital
 * 
 * @param gpio_t Puntero de objeto obtenido al llamar a la funcion GpioCreate.
 * @param bool El valor del estado.
 * @return void
*/
void GpioSetState(gpio_t self, bool state);

/**
 * @brief Funcion para consultar el estado de un puerto digital
 * 
 * @param gpio_t Puntero de objeto obtenido al llamar a la funcion GpioCreate.
 * @return true El puerto digial esta encendido.
 * @retur false El puerto digital esta apagado.
*/
bool GpioGetState(gpio_t self);

/**
 * @brief Funcion para consultar la salida o direccion de un puerto digital
 * 
 * @param gpio_t Puntero de objeto obtenido al llamar a la funcion GpioCreate.
 * @return true El puerto digial esta escribiendo.
 * @retur false El puerto digital no esta escribiendo.
*/
bool GpioGetDirection(gpio_t self);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
# RGB Matrix instead of RGB light
In keyboard.json inside features, replace rgblight with rgb_matrix, then also replace the whole rgblight stanza with the following, finally in vial.json replace qmg_rgblight with vialrgb.

"rgb_matrix": {
        "driver": "ws2812",
        "sleep": true,
        "animations": {
            "alphas_mods": true,
            "gradient_up_down": true,
            "gradient_left_right": true,
            "breathing": true,
            "band_sat": true,
            "band_val": true,
            "band_pinwheel_sat": true,
            "band_pinwheel_val": true,
            "band_spiral_sat": true,
            "band_spiral_val": true,
            "cycle_all": true,
            "cycle_left_right": true,
            "cycle_up_down": true,
            "cycle_out_in": true,
            "cycle_out_in_dual": true,
            "rainbow_moving_chevron": true,
            "cycle_pinwheel": true,
            "cycle_spiral": true,
            "dual_beacon": true,
            "rainbow_beacon": true,
            "rainbow_pinwheels": true,
            "hue_breathing": true,
            "hue_pendulum": true,
            "hue_wave": true,
            "typing_heatmap": true,
            "digital_rain": true,
            "solid_reactive_simple": true,
            "solid_reactive": true,
            "solid_reactive_wide": true,
            "solid_reactive_multiwide": true,
            "solid_reactive_cross": true,
            "solid_reactive_multicross": true,
            "solid_reactive_nexus": true,
            "solid_reactive_multinexus": true,
            "splash": true,
            "multisplash": true,
            "solid_splash": true,
            "solid_multisplash": true

        },
        "layout": [
            {
                "flags": 4,
                "x": 0,
                "y": 0
            },
            {
                "flags": 4,
                "x": 1,
                "y": 0
            },
            {
                "flags": 4,
                "x": 2,
                "y": 0
            },
            {
                "flags": 4,
                "x": 3,
                "y": 0
            },
            {
                "flags": 4,
                "x": 4,
                "y": 0
            },
            {
                "flags": 4,
                "x": 5,
                "y": 0
            },
            {
                "flags": 4,
                "x": 6,
                "y": 0
            }
        ]
    },

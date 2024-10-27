% Kalman filter estimation loop
        x_estimates = zeros(1, length(z));
p_estimates = zeros(1, length(z));

for
        n = 1 : length(z)
                    x_pred = x_est;
p_pred = p_est;

K = p_pred / (p_pred + R);
% Kalman gain
        x_est = x_pred + K * (z(n) - x_pred);
p_est = (1 - K) * p_pred;

x_estimates(n) = x_est;
p_estimates(n) = p_est;
end

    conf_intervals_upper = x_estimates + 1.96 * sqrt(p_estimates);
conf_intervals_lower = x_estimates - 1.96 * sqrt(p_estimates);

figure;
hold on;
plot(1 : length(z), z, 'ro-', 'DisplayName', 'Measured values');
plot(1 : length(z), x_estimates, 'b-', 'DisplayName', 'Estimates (Kalman Filter)');
fill([1:length(z), fliplr(1 : length(z))], [ conf_intervals_upper, fliplr(conf_intervals_lower) ],
     'b', 'FaceAlpha', 0.2, 'EdgeColor', 'none', 'DisplayName', '95% Confidence Interval');
yline(true_height, 'g--', 'DisplayName', 'True value', 'LineWidth', 1.5);

xlabel('Time Step (n)');
ylabel('Height');
title('Kalman Filter Estimates with 95% Confidence Intervals');
legend('show');
grid on;
hold off;

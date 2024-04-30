classdef Robot_motion_simulation1 < matlab.apps.AppBase

    % Properties that correspond to app components
    properties (Access = public)
        UIFigure             matlab.ui.Figure
        PauseSlider          matlab.ui.control.Slider
        PauseSliderLabel     matlab.ui.control.Label
        TriggerSwitch        matlab.ui.control.Switch
        TriggerSwitchLabel   matlab.ui.control.Label
        StartButton          matlab.ui.control.Button
        link2EditField       matlab.ui.control.NumericEditField
        link2EditFieldLabel  matlab.ui.control.Label
        link1EditField       matlab.ui.control.NumericEditField
        link1EditFieldLabel  matlab.ui.control.Label
        UIAxes               matlab.ui.control.UIAxes
    end

    % Callbacks that handle component events
    methods (Access = private)

        % Button pushed function: StartButton
        function StartButtonPushed(app, event)
hold(app.UIAxes,'off')                                                     %delete the previous data
%the inputs by the user 
link1=app.link1EditField.Value;
 
link2=app.link2EditField.Value;

%the angles 
theta1=linspace(0,360,1000);
theta2=linspace(0,360,1000);


%the value of x1,y1 and x2,y2  
x1= link1*cosd(theta1);                                                     %now it is a matrix of 100 element 
y1=link1*sind(theta1);

x2=x1+link2*cosd(theta1+theta2);
y2=y1+link2*sind(theta1+theta2);

%create a variable to delete the last iteration
%p=plot([0,x1(i)],[0,y1(i)],[x1(i),x2(i)],[y1(i),y2(i)]);                   %no difference from the below way
p1=plot(app.UIAxes,[0,x1(1)],[0,y1(1)],'g',LineWidth=2);
hold(app.UIAxes,'on')

p2=plot(app.UIAxes,[x1(1),x2(1)],[y1(1),y2(1)],'b',LineWidth=3);


xlim(app.UIAxes,[-link1*2,link1*2]);                                                   %add limits for the frame on x-axis
ylim(app.UIAxes,[-(link1)*2,(link1)*2]);                                               %add limits for the frame on y-axis
grid (app.UIAxes,'on')

plot(app.UIAxes,x2,y2);                                                                %plot the final curve path 
%to plot the different angles 
%code for triger switch part 
while(app.TriggerSwitch.Value== "On")
    for i=1:length(theta2)
        delete(p1);
        delete(p2);
        %p=plot([0,x1(i)],[0,y1(i)],[x1(i),x2(i)],[y1(i),y2(i)]);               %no difference from the below way
        p1=plot(app.UIAxes,[0,x1(i)],[0,y1(i)],'g',LineWidth=2);
        p2=plot(app.UIAxes,[x1(i),x2(i)],[y1(i),y2(i)],'b',LineWidth=3);
        drawnow                                                                 %to draw the animation at same time of the loop
   % pause(0);                                                             %%to control the speed make it quite lower 
    end % end the forloop
end %end the while 

        end
    end

    % Component initialization
    methods (Access = private)

        % Create UIFigure and components
        function createComponents(app)

            % Create UIFigure and hide until all components are created
            app.UIFigure = uifigure('Visible', 'off');
            app.UIFigure.Position = [100 100 640 480];
            app.UIFigure.Name = 'MATLAB App';

            % Create UIAxes
            app.UIAxes = uiaxes(app.UIFigure);
            title(app.UIAxes, 'Robot animation simulation')
            xlabel(app.UIAxes, 'X-limit')
            ylabel(app.UIAxes, 'Y-limit')
            zlabel(app.UIAxes, 'Z')
            app.UIAxes.Position = [304 97 311 346];

            % Create link1EditFieldLabel
            app.link1EditFieldLabel = uilabel(app.UIFigure);
            app.link1EditFieldLabel.HorizontalAlignment = 'right';
            app.link1EditFieldLabel.Position = [456 59 30 22];
            app.link1EditFieldLabel.Text = 'link1';

            % Create link1EditField
            app.link1EditField = uieditfield(app.UIFigure, 'numeric');
            app.link1EditField.Limits = [0.1 20];
            app.link1EditField.Position = [501 59 100 22];
            app.link1EditField.Value = 5;

            % Create link2EditFieldLabel
            app.link2EditFieldLabel = uilabel(app.UIFigure);
            app.link2EditFieldLabel.HorizontalAlignment = 'right';
            app.link2EditFieldLabel.Position = [456 17 30 22];
            app.link2EditFieldLabel.Text = 'link2';

            % Create link2EditField
            app.link2EditField = uieditfield(app.UIFigure, 'numeric');
            app.link2EditField.Limits = [0.1 20];
            app.link2EditField.Position = [501 17 100 22];
            app.link2EditField.Value = 4;

            % Create StartButton
            app.StartButton = uibutton(app.UIFigure, 'push');
            app.StartButton.ButtonPushedFcn = createCallbackFcn(app, @StartButtonPushed, true);
            app.StartButton.Position = [34 434 100 23];
            app.StartButton.Text = 'Start';

            % Create TriggerSwitchLabel
            app.TriggerSwitchLabel = uilabel(app.UIFigure);
            app.TriggerSwitchLabel.HorizontalAlignment = 'center';
            app.TriggerSwitchLabel.Position = [46 352 78 22];
            app.TriggerSwitchLabel.Text = 'TriggerSwitch';

            % Create TriggerSwitch
            app.TriggerSwitch = uiswitch(app.UIFigure, 'slider');
            app.TriggerSwitch.Position = [61 389 45 20];
            app.TriggerSwitch.Value = 'On';

            
            % Show the figure after all components are created
            app.UIFigure.Visible = 'on';
        end
    end

    % App creation and deletion
    methods (Access = public)

        % Construct app
        function app = Robot_motion_simulation1

            % Create UIFigure and components
            createComponents(app)

            % Register the app with App Designer
            registerApp(app, app.UIFigure)

            if nargout == 0
                clear app
            end
        end

        % Code that executes before app deletion
        function delete(app)

            % Delete UIFigure when app is deleted
            delete(app.UIFigure)
        end
    end
end
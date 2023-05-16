import React, { Component } from 'react';
import PropTypes from 'prop-types';

class Lifecycle extends Component {
    constructor(props) {
        super(props);
        console.log("constructor called");
        this.state={count:0}

    }

    // componentWillMount() {
    //     console.log("componentWillMount called");
    // }

    componentDidMount() {
       
        setTimeout(() => {
            console.log("componentDidMount called");
        }, 2000);
        
    }

    // componentWillReceiveProps(nextProps) {
    //     console.log("componentWillReceiveProps called");
        
    // }

    shouldComponentUpdate(nextProps, nextState) {
        console.log('shouldComponentUpdate called');
        console.log("nextState",nextState);
        return true;
        
        
    }

    // componentWillUpdate(nextProps, nextState) {
    //     console.log('componentWillUpdate called');
        
    // }

    componentDidUpdate(prevProps, prevState) {
        console.log('componentDidUpdate called');
        console.log("prevstate",prevState);
        
        
    }

    componentWillUnmount() {
        console.log('componentWillUnmount called');
        
    }

    

    render() {
        console.log('render called');
        
        return (
            <div>
                <h1>{this.state.count}</h1>
                <button className='btn btn-success' onClick={()=>{this.setState({count:this.state.count+1})}}> click</button>
            </div>
        );
    }
}





export default Lifecycle;